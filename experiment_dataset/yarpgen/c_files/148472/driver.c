#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
unsigned long long int var_1 = 12395135164584235521ULL;
int var_2 = -240826564;
long long int var_5 = -5317213997348104459LL;
int var_6 = 1340473378;
unsigned int var_8 = 2632520995U;
int zero = 0;
short var_14 = (short)25228;
int var_15 = 779579668;
unsigned char var_16 = (unsigned char)82;
long long int var_17 = 8487524699059817890LL;
_Bool arr_0 [11] [11] ;
short arr_2 [11] ;
unsigned long long int arr_5 [11] ;
long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-30470;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 5544720047791859462ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4336652461005307789LL : 3089668140154488020LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
