#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2026055473;
int var_4 = -538490345;
signed char var_7 = (signed char)-108;
signed char var_8 = (signed char)39;
unsigned int var_11 = 459220866U;
signed char var_12 = (signed char)-73;
unsigned short var_14 = (unsigned short)24446;
short var_16 = (short)7533;
unsigned short var_18 = (unsigned short)1468;
int zero = 0;
unsigned short var_19 = (unsigned short)39606;
long long int var_20 = 4850367517301915604LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 1441734903428538983LL;
signed char var_23 = (signed char)-98;
short var_24 = (short)-30771;
int var_25 = 1683585333;
short var_26 = (short)24727;
unsigned int var_27 = 1778911615U;
unsigned short var_28 = (unsigned short)3479;
unsigned int var_29 = 3551438541U;
int var_30 = -175544820;
unsigned int var_31 = 2401019815U;
_Bool var_32 = (_Bool)1;
unsigned int arr_1 [18] [18] ;
long long int arr_5 [20] ;
signed char arr_6 [20] ;
long long int arr_7 [20] ;
unsigned short arr_8 [24] ;
long long int arr_9 [24] ;
unsigned short arr_11 [24] ;
signed char arr_12 [24] [24] ;
int arr_14 [24] [24] [24] [24] ;
_Bool arr_18 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 483934062U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -2247079013245288649LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 8473260218891480918LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)13472;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 1900721100989179667LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned short)23258;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -2134255488;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
