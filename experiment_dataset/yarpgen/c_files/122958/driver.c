#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-16166;
unsigned short var_3 = (unsigned short)32210;
short var_4 = (short)-26198;
unsigned short var_6 = (unsigned short)58277;
unsigned int var_12 = 2309366734U;
_Bool var_14 = (_Bool)1;
int var_17 = 1689225968;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-24134;
unsigned short var_20 = (unsigned short)47271;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)42596;
short var_23 = (short)32602;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 1693995704U;
unsigned long long int var_26 = 10657281435208751394ULL;
unsigned int var_27 = 1563195699U;
unsigned char arr_1 [23] ;
_Bool arr_3 [23] [23] [23] ;
int arr_4 [23] [23] ;
int arr_5 [23] ;
unsigned short arr_6 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -180269339;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1944547017;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)28082 : (unsigned short)25494;
}

void checksum() {
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
