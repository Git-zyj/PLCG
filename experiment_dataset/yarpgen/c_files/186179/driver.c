#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9264466885883941593ULL;
long long int var_1 = 8807449325003232829LL;
unsigned short var_2 = (unsigned short)48865;
long long int var_3 = -3414933798274043877LL;
int zero = 0;
unsigned long long int var_16 = 8293590275089031928ULL;
int var_17 = -47862271;
unsigned long long int var_18 = 2613237707510221624ULL;
unsigned long long int var_19 = 7258486477690397056ULL;
unsigned long long int var_20 = 12449937827507430569ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 2616336913555831436ULL;
unsigned short var_23 = (unsigned short)42732;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)40845;
signed char var_26 = (signed char)-31;
signed char var_27 = (signed char)102;
unsigned long long int var_28 = 338769873584166242ULL;
unsigned int arr_0 [24] ;
_Bool arr_1 [24] ;
int arr_2 [24] [24] [24] ;
short arr_3 [24] [24] [24] ;
signed char arr_8 [24] [24] ;
short arr_18 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1540185896U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -2104890912;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)13635;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-9 : (signed char)-116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (short)-29417;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
