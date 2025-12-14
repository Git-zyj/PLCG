#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56129;
unsigned char var_2 = (unsigned char)176;
unsigned int var_3 = 2909373126U;
_Bool var_4 = (_Bool)0;
int var_14 = 2049930380;
unsigned long long int var_16 = 8652848087236624367ULL;
long long int var_17 = -3421915726705168419LL;
int zero = 0;
signed char var_19 = (signed char)120;
unsigned int var_20 = 4252662326U;
signed char var_21 = (signed char)-95;
unsigned char var_22 = (unsigned char)63;
long long int var_23 = 4909531382469007515LL;
int arr_1 [13] [13] ;
unsigned short arr_2 [13] ;
unsigned long long int arr_7 [13] [13] [13] [13] ;
signed char arr_10 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -1904875101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)5026;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 15299866658077421894ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-66;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
