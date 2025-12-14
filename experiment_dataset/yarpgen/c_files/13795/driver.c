#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 745430254U;
unsigned char var_1 = (unsigned char)98;
unsigned short var_3 = (unsigned short)28501;
unsigned int var_6 = 1003614450U;
unsigned short var_8 = (unsigned short)50030;
unsigned short var_10 = (unsigned short)36320;
unsigned int var_12 = 3029626456U;
unsigned short var_13 = (unsigned short)48766;
short var_14 = (short)-1354;
short var_15 = (short)-28019;
int zero = 0;
unsigned short var_18 = (unsigned short)39433;
unsigned short var_19 = (unsigned short)63718;
unsigned int var_20 = 1443889297U;
unsigned int var_21 = 2957674814U;
short var_22 = (short)21384;
unsigned short var_23 = (unsigned short)4315;
unsigned short var_24 = (unsigned short)60016;
short var_25 = (short)14783;
unsigned short var_26 = (unsigned short)39382;
long long int var_27 = 443274480661604096LL;
short arr_0 [24] ;
short arr_1 [24] ;
short arr_2 [24] [24] ;
unsigned short arr_4 [25] ;
unsigned char arr_3 [24] [24] ;
unsigned char arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-6464;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)122;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-23881;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)48654;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)3 : (unsigned char)231;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
