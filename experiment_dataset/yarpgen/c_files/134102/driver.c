#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6617166999790148291LL;
unsigned long long int var_3 = 4553021129809410216ULL;
unsigned short var_5 = (unsigned short)15847;
unsigned int var_7 = 352352133U;
short var_8 = (short)18074;
int var_10 = -724903975;
short var_11 = (short)-7799;
unsigned short var_12 = (unsigned short)36713;
signed char var_15 = (signed char)-110;
unsigned int var_16 = 4099980313U;
signed char var_18 = (signed char)-28;
unsigned long long int var_19 = 3105470814928423711ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)227;
int var_21 = -153272643;
unsigned char var_22 = (unsigned char)86;
signed char var_23 = (signed char)-117;
signed char var_24 = (signed char)28;
unsigned char arr_4 [23] [23] [23] ;
_Bool arr_7 [23] [23] [23] ;
int arr_8 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1124908829;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
