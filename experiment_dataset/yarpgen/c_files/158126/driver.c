#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1732429507;
signed char var_1 = (signed char)94;
unsigned short var_2 = (unsigned short)54791;
int var_4 = 2053739258;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3547334296U;
long long int var_7 = -4834786172312503015LL;
long long int var_10 = -1033158039248958116LL;
short var_11 = (short)-3353;
unsigned long long int var_12 = 992154273291616653ULL;
int zero = 0;
signed char var_13 = (signed char)9;
unsigned long long int var_14 = 4357051861316529899ULL;
unsigned short var_15 = (unsigned short)55518;
int var_16 = 1993106218;
unsigned short var_17 = (unsigned short)29417;
unsigned char var_18 = (unsigned char)11;
unsigned long long int var_19 = 340190966534569879ULL;
short var_20 = (short)14576;
signed char arr_0 [10] [10] ;
signed char arr_3 [10] ;
_Bool arr_5 [10] [10] [10] [10] ;
int arr_11 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -905807556;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
