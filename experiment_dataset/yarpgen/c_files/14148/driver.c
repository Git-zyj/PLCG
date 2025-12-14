#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)165;
short var_4 = (short)-4663;
unsigned int var_5 = 3987497095U;
signed char var_6 = (signed char)90;
unsigned long long int var_8 = 7981755838122027063ULL;
unsigned short var_9 = (unsigned short)2048;
unsigned char var_11 = (unsigned char)168;
short var_13 = (short)25324;
int zero = 0;
signed char var_15 = (signed char)36;
unsigned short var_16 = (unsigned short)15394;
unsigned short var_17 = (unsigned short)21842;
unsigned char var_18 = (unsigned char)172;
unsigned short var_19 = (unsigned short)39873;
long long int var_20 = -7511121593367368163LL;
short var_21 = (short)-1138;
unsigned long long int var_22 = 9401732018744290858ULL;
unsigned char var_23 = (unsigned char)244;
_Bool arr_0 [11] [11] ;
signed char arr_1 [11] ;
unsigned char arr_2 [11] ;
unsigned char arr_3 [17] [17] ;
unsigned short arr_4 [17] [17] ;
unsigned short arr_5 [17] ;
unsigned char arr_6 [17] [17] ;
short arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)32956;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)3648;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)99 : (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (short)994;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
