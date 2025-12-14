#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)59;
int var_4 = 2081933935;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 9182615466016603820ULL;
unsigned int var_10 = 2706589577U;
unsigned short var_11 = (unsigned short)42032;
_Bool var_12 = (_Bool)0;
int var_14 = -318407292;
int zero = 0;
unsigned short var_17 = (unsigned short)13944;
long long int var_18 = 1062088250721079135LL;
unsigned short var_19 = (unsigned short)10165;
short var_20 = (short)-27892;
unsigned short var_21 = (unsigned short)35127;
long long int var_22 = 46305506980265103LL;
unsigned char arr_0 [12] ;
unsigned short arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)8858;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
