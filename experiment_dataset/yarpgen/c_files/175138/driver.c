#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8907860282039847931LL;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)197;
short var_5 = (short)-2156;
_Bool var_6 = (_Bool)0;
int var_10 = 563588466;
unsigned short var_11 = (unsigned short)43924;
unsigned long long int var_12 = 3045616845627975307ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 12660850342424272309ULL;
unsigned int var_16 = 3241980610U;
int zero = 0;
short var_17 = (short)-13135;
int var_18 = 1498031902;
unsigned long long int var_19 = 3495538723068444157ULL;
_Bool var_20 = (_Bool)0;
int var_21 = 643440285;
signed char var_22 = (signed char)-107;
unsigned short var_23 = (unsigned short)51683;
int var_24 = 1723780113;
int var_25 = 444255924;
unsigned char var_26 = (unsigned char)130;
unsigned char arr_1 [21] ;
short arr_2 [21] ;
short arr_6 [21] [21] [21] ;
unsigned short arr_15 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)7533;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-13234;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)30804;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
