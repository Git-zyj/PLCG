#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1400919170;
unsigned int var_6 = 3133127348U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-103;
short var_11 = (short)-26691;
unsigned int var_13 = 2927089252U;
unsigned int var_14 = 2438145668U;
int zero = 0;
long long int var_16 = 1896146894374491617LL;
long long int var_17 = -8410541626639299846LL;
long long int var_18 = 1993941700822976536LL;
long long int var_19 = 969607671471184313LL;
unsigned short var_20 = (unsigned short)57428;
short var_21 = (short)-11378;
unsigned short var_22 = (unsigned short)36981;
signed char var_23 = (signed char)-97;
unsigned int var_24 = 1102141891U;
int arr_0 [25] ;
signed char arr_1 [25] ;
long long int arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1856445964;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 5604671250266674814LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
