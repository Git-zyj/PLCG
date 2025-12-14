#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)65;
unsigned long long int var_2 = 2740576581432472408ULL;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)87;
short var_7 = (short)28761;
unsigned char var_9 = (unsigned char)244;
signed char var_10 = (signed char)-67;
int zero = 0;
unsigned short var_11 = (unsigned short)51155;
unsigned int var_12 = 1749213653U;
short var_13 = (short)-3422;
unsigned short var_14 = (unsigned short)45684;
long long int var_15 = 5598909462432510235LL;
unsigned int arr_5 [11] ;
unsigned int arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 3848530475U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 1527379330U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
