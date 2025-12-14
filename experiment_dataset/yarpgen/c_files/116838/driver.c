#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6943;
unsigned int var_4 = 3646390800U;
_Bool var_6 = (_Bool)0;
long long int var_15 = 9198335092764589434LL;
short var_16 = (short)-4688;
int zero = 0;
unsigned long long int var_17 = 14060534581919664947ULL;
unsigned long long int var_18 = 18020032063377173611ULL;
long long int var_19 = -3076014412424360586LL;
short var_20 = (short)-8068;
unsigned char arr_7 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)58 : (unsigned char)31;
}

void checksum() {
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
