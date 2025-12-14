#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15286661133796412062ULL;
long long int var_7 = 3708873686707935751LL;
signed char var_8 = (signed char)115;
unsigned char var_13 = (unsigned char)248;
signed char var_14 = (signed char)100;
unsigned short var_15 = (unsigned short)54490;
short var_17 = (short)-750;
unsigned char var_19 = (unsigned char)108;
int zero = 0;
unsigned short var_20 = (unsigned short)50600;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1490742681U;
signed char var_23 = (signed char)-13;
_Bool var_24 = (_Bool)0;
unsigned int arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
unsigned int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 2190658443U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2089440944U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2613970909U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
