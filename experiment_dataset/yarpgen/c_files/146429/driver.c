#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)62547;
unsigned long long int var_3 = 17444214995750456102ULL;
unsigned short var_5 = (unsigned short)47751;
unsigned char var_6 = (unsigned char)147;
unsigned long long int var_9 = 15926072924648531085ULL;
int var_10 = -1136696479;
unsigned short var_11 = (unsigned short)38374;
int zero = 0;
unsigned char var_12 = (unsigned char)204;
unsigned int var_13 = 2964729372U;
unsigned int var_14 = 4156199801U;
unsigned short var_15 = (unsigned short)20462;
int var_16 = 490452464;
unsigned short var_17 = (unsigned short)41536;
short var_18 = (short)-3765;
unsigned long long int var_19 = 6320774801176334447ULL;
int var_20 = 621978753;
unsigned int var_21 = 2747319382U;
unsigned int var_22 = 3260883187U;
unsigned char var_23 = (unsigned char)115;
signed char var_24 = (signed char)(-127 - 1);
unsigned char var_25 = (unsigned char)179;
unsigned short var_26 = (unsigned short)64348;
long long int arr_2 [17] ;
signed char arr_4 [20] ;
unsigned char arr_5 [20] [20] ;
signed char arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 4629195761007545814LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-48;
}

void checksum() {
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
