#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
unsigned long long int var_1 = 1518297945473444214ULL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2275963714U;
unsigned short var_4 = (unsigned short)720;
unsigned short var_5 = (unsigned short)29301;
unsigned int var_7 = 3511949287U;
unsigned char var_8 = (unsigned char)116;
unsigned short var_9 = (unsigned short)62834;
unsigned int var_11 = 3427673977U;
int zero = 0;
long long int var_15 = -7448236364502165729LL;
signed char var_16 = (signed char)101;
unsigned long long int var_17 = 12175634638448919489ULL;
unsigned short var_18 = (unsigned short)38276;
unsigned int var_19 = 3172256590U;
unsigned char arr_2 [15] ;
short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-10220 : (short)-3129;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
