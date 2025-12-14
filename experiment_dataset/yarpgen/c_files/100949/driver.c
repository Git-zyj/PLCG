#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3285054608U;
int var_2 = 1099768061;
unsigned char var_3 = (unsigned char)168;
short var_6 = (short)-1957;
signed char var_9 = (signed char)15;
int zero = 0;
unsigned short var_10 = (unsigned short)27019;
signed char var_11 = (signed char)62;
unsigned char var_12 = (unsigned char)125;
long long int var_13 = 2406739096418996266LL;
short var_14 = (short)20692;
short var_15 = (short)-1020;
unsigned short var_16 = (unsigned short)46024;
unsigned char var_17 = (unsigned char)19;
unsigned short var_18 = (unsigned short)56166;
int var_19 = 1993977001;
unsigned long long int var_20 = 5759302970132661699ULL;
unsigned short var_21 = (unsigned short)15361;
unsigned long long int var_22 = 5991221200429585519ULL;
unsigned long long int var_23 = 14925176136540785420ULL;
int var_24 = -1092059631;
int arr_0 [10] [10] ;
long long int arr_1 [10] ;
unsigned short arr_2 [10] ;
int arr_3 [10] ;
unsigned short arr_14 [25] ;
unsigned short arr_16 [25] ;
unsigned long long int arr_18 [11] ;
short arr_23 [11] [11] ;
signed char arr_13 [10] ;
_Bool arr_24 [11] ;
int arr_25 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 255551335;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -5625402690570672486LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)13237;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 156159890;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (unsigned short)20981;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (unsigned short)13746;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 10263889095510330308ULL : 10925921501070061891ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_23 [i_0] [i_1] = (short)5634;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)43 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_25 [i_0] = 2013648833;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
