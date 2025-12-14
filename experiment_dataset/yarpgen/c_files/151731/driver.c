#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-10317;
unsigned char var_8 = (unsigned char)90;
long long int var_12 = 2779116337322812770LL;
int var_13 = 1727456882;
int zero = 0;
unsigned long long int var_16 = 8350387247994033931ULL;
unsigned int var_17 = 2413162014U;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int var_20 = 7528629;
signed char var_21 = (signed char)123;
unsigned short var_22 = (unsigned short)7969;
short var_23 = (short)-30827;
long long int var_24 = -3272431966447440085LL;
unsigned short var_25 = (unsigned short)29299;
unsigned int var_26 = 365852905U;
short var_27 = (short)32128;
short arr_1 [12] ;
unsigned int arr_2 [12] ;
unsigned short arr_3 [12] ;
unsigned int arr_4 [12] [12] ;
unsigned int arr_5 [12] [12] [12] ;
unsigned long long int arr_6 [12] [12] ;
unsigned short arr_7 [12] [12] [12] ;
_Bool arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-32454;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2664755530U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)5439;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 2846451691U : 3482762426U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1783131705U : 26637226U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 13358267625682515393ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)28151;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
