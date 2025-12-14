#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3704;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)55366;
unsigned char var_11 = (unsigned char)192;
short var_13 = (short)-9797;
unsigned char var_15 = (unsigned char)101;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)221;
unsigned short var_20 = (unsigned short)41320;
short var_21 = (short)13839;
unsigned char var_22 = (unsigned char)111;
unsigned short var_23 = (unsigned short)52029;
unsigned int var_24 = 3984773706U;
unsigned short var_25 = (unsigned short)7958;
long long int var_26 = -282932642406326711LL;
unsigned short var_27 = (unsigned short)21773;
unsigned char var_28 = (unsigned char)121;
unsigned short var_29 = (unsigned short)25825;
unsigned char var_30 = (unsigned char)10;
unsigned char var_31 = (unsigned char)125;
int arr_0 [15] ;
short arr_1 [15] ;
long long int arr_3 [15] ;
short arr_4 [15] [15] ;
_Bool arr_5 [15] [15] ;
short arr_7 [20] [20] ;
short arr_9 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -28551619;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)23443;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8109431807814105923LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-31830;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-19411;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-31256;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
