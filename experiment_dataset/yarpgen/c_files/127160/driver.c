#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10203;
unsigned short var_4 = (unsigned short)20172;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 16748781426742022123ULL;
unsigned char var_7 = (unsigned char)122;
unsigned char var_9 = (unsigned char)145;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-22;
long long int var_12 = -3611491200057903207LL;
unsigned char var_14 = (unsigned char)136;
int zero = 0;
signed char var_15 = (signed char)37;
short var_16 = (short)12120;
unsigned char var_17 = (unsigned char)247;
long long int var_18 = -5767198212649000926LL;
unsigned long long int var_19 = 15779756784547762231ULL;
int var_20 = 1182265503;
unsigned short arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
_Bool arr_2 [14] ;
unsigned char arr_4 [14] [14] [14] ;
short arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)12414;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2907063328U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (short)24145;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
