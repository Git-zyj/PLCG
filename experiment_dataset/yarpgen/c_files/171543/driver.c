#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)229;
unsigned int var_2 = 3110850916U;
int var_3 = -934210340;
unsigned short var_4 = (unsigned short)48601;
unsigned short var_5 = (unsigned short)11524;
unsigned long long int var_7 = 8477659918083633822ULL;
unsigned int var_9 = 882388879U;
int var_10 = 487777597;
unsigned long long int var_12 = 6305815623465664158ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)20;
unsigned char var_14 = (unsigned char)235;
unsigned char var_15 = (unsigned char)13;
unsigned short var_16 = (unsigned short)20189;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-11066;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)87;
unsigned short var_21 = (unsigned short)27261;
unsigned short arr_3 [24] ;
unsigned short arr_4 [24] ;
unsigned char arr_2 [11] ;
_Bool arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)35747;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)51202;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)75 : (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
