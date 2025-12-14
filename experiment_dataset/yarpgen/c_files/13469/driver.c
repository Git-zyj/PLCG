#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2756177572866428272ULL;
int var_3 = 1067070316;
unsigned char var_4 = (unsigned char)78;
unsigned char var_5 = (unsigned char)253;
signed char var_8 = (signed char)95;
unsigned long long int var_9 = 4983210361146027072ULL;
unsigned char var_14 = (unsigned char)29;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1895773153;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 18059991112483420332ULL;
int var_20 = -692187260;
unsigned long long int var_21 = 1455029592057009230ULL;
unsigned char arr_1 [25] ;
signed char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)121 : (signed char)-6;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
