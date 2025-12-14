#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8314495632434233604LL;
short var_2 = (short)12267;
short var_3 = (short)-23093;
signed char var_5 = (signed char)-30;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)191;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_17 = 304253560;
unsigned long long int var_18 = 17378968170826325258ULL;
long long int var_19 = -3639909345936321712LL;
unsigned long long int var_20 = 2007301464719991928ULL;
unsigned char var_21 = (unsigned char)162;
unsigned short arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20374 : (unsigned short)5068;
}

void checksum() {
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
