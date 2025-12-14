#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)106;
signed char var_4 = (signed char)-87;
signed char var_5 = (signed char)-55;
short var_7 = (short)32108;
unsigned int var_8 = 205373835U;
unsigned long long int var_9 = 12744595127321889122ULL;
unsigned char var_11 = (unsigned char)181;
unsigned int var_12 = 1504824565U;
int zero = 0;
unsigned char var_14 = (unsigned char)179;
unsigned int var_15 = 4183082229U;
short var_16 = (short)2441;
int var_17 = -660907144;
unsigned char var_18 = (unsigned char)35;
unsigned short var_19 = (unsigned short)47940;
short var_20 = (short)11979;
unsigned short var_21 = (unsigned short)23073;
unsigned int var_22 = 4274161935U;
signed char var_23 = (signed char)71;
unsigned char var_24 = (unsigned char)77;
unsigned long long int var_25 = 16738355661162999209ULL;
signed char var_26 = (signed char)73;
short var_27 = (short)10674;
unsigned short var_28 = (unsigned short)50068;
unsigned int arr_0 [13] ;
unsigned int arr_2 [13] ;
unsigned char arr_4 [23] [23] ;
signed char arr_5 [23] ;
unsigned short arr_9 [21] ;
signed char arr_10 [21] [21] ;
unsigned short arr_3 [13] ;
unsigned short arr_8 [14] ;
unsigned long long int arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3815821917U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1669939154U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned short)53329;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)14882;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49256 : (unsigned short)22734;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 3117502670788881715ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
