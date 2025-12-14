#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4481120577716934025LL;
short var_3 = (short)7292;
unsigned short var_4 = (unsigned short)63824;
unsigned long long int var_5 = 8640305328352473355ULL;
unsigned int var_6 = 1105639344U;
short var_10 = (short)31711;
int zero = 0;
unsigned long long int var_12 = 2459287155230790891ULL;
long long int var_13 = -1623980172364225674LL;
unsigned short var_14 = (unsigned short)31529;
short var_15 = (short)30954;
unsigned char arr_0 [21] ;
long long int arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -5697329741184251587LL : -3210550124879890179LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
