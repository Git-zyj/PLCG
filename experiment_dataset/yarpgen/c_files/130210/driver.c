#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16810230351107409233ULL;
long long int var_1 = 1307343303396291844LL;
unsigned char var_5 = (unsigned char)22;
unsigned short var_6 = (unsigned short)54282;
unsigned short var_7 = (unsigned short)39506;
unsigned long long int var_12 = 5675940116550812984ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-8920;
long long int var_15 = -8564652165365890454LL;
unsigned long long int var_16 = 10823811008741692343ULL;
short var_17 = (short)-13984;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 15498254771505557407ULL;
unsigned int var_20 = 370112744U;
unsigned short arr_0 [15] [15] ;
long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)33327;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1663535322849751169LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
