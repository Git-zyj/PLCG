#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -500953342;
signed char var_4 = (signed char)42;
unsigned long long int var_6 = 3939973774845813358ULL;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-22899;
long long int var_13 = -2230368264839283751LL;
unsigned short var_14 = (unsigned short)38437;
int zero = 0;
int var_15 = 841348807;
short var_16 = (short)9236;
signed char var_17 = (signed char)-111;
short var_18 = (short)-32597;
int var_19 = 188055290;
signed char var_20 = (signed char)107;
unsigned int arr_1 [11] [11] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 2538318613U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)18 : (signed char)-31;
}

void checksum() {
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
