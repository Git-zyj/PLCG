#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
short var_1 = (short)11772;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)156;
long long int var_4 = -4622472789710984601LL;
signed char var_5 = (signed char)-99;
unsigned long long int var_6 = 16060812836331235813ULL;
long long int var_7 = 4418866590136274642LL;
unsigned char var_8 = (unsigned char)150;
unsigned short var_9 = (unsigned short)5428;
signed char var_10 = (signed char)20;
unsigned char var_11 = (unsigned char)171;
unsigned char var_12 = (unsigned char)131;
unsigned short var_13 = (unsigned short)38295;
int zero = 0;
unsigned short var_14 = (unsigned short)5903;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-4765;
signed char var_17 = (signed char)-33;
unsigned short var_18 = (unsigned short)32521;
unsigned short arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
long long int arr_2 [24] [24] [24] ;
unsigned short arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)51403 : (unsigned short)17195;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3425827696U : 2056108095U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3282614665161784306LL : 3550467167928213830LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)32712 : (unsigned short)16500;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
