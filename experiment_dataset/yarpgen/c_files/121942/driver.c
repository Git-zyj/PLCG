#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1963612003U;
int var_3 = 2141015447;
int var_5 = -380199452;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
short var_13 = (short)14678;
unsigned int var_14 = 3205356947U;
unsigned char var_17 = (unsigned char)220;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1570801031U;
int zero = 0;
short var_20 = (short)-26812;
unsigned short var_21 = (unsigned short)9642;
unsigned int var_22 = 3143953670U;
long long int var_23 = -8848364760970221520LL;
unsigned char var_24 = (unsigned char)2;
unsigned int var_25 = 1211261231U;
signed char var_26 = (signed char)0;
unsigned int var_27 = 1878408916U;
unsigned int var_28 = 4079677234U;
unsigned char var_29 = (unsigned char)140;
unsigned int arr_1 [10] [10] ;
unsigned char arr_5 [10] [10] [10] [10] ;
long long int arr_9 [14] ;
unsigned int arr_11 [20] [20] ;
unsigned short arr_12 [20] ;
unsigned int arr_13 [20] ;
unsigned char arr_15 [20] ;
_Bool arr_17 [16] [16] ;
_Bool arr_10 [14] [14] ;
long long int arr_20 [16] ;
unsigned char arr_21 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 2746825865U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)152 : (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 3004540106094749520LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 504925278U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned short)7389;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 2458023627U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 6878944307312780071LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)127;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
