#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63454;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)20;
unsigned char var_5 = (unsigned char)60;
int var_7 = 551772950;
_Bool var_8 = (_Bool)0;
int var_11 = -2093909709;
signed char var_12 = (signed char)32;
int var_14 = 1173886287;
int zero = 0;
short var_16 = (short)21152;
unsigned int var_17 = 950483727U;
unsigned long long int var_18 = 13664598964725429820ULL;
unsigned char var_19 = (unsigned char)222;
long long int var_20 = -5259019490427676877LL;
unsigned char arr_1 [18] ;
short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-19518 : (short)-7948;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
