#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23168;
unsigned int var_5 = 1328758326U;
short var_6 = (short)-13104;
short var_7 = (short)1221;
unsigned short var_9 = (unsigned short)53181;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)77;
int zero = 0;
long long int var_14 = 8091856022027802257LL;
long long int var_15 = -461259626466569467LL;
signed char var_16 = (signed char)-120;
unsigned char var_17 = (unsigned char)126;
long long int var_18 = 1531121793060880859LL;
unsigned short var_19 = (unsigned short)39450;
signed char arr_0 [22] [22] ;
_Bool arr_1 [22] [22] ;
unsigned char arr_2 [22] ;
unsigned short arr_7 [23] ;
unsigned char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)7853;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)218;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
