#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19301;
long long int var_2 = 5234511472516282039LL;
int var_5 = 1467932165;
unsigned short var_7 = (unsigned short)25859;
unsigned int var_11 = 2581417064U;
int var_13 = -72788742;
short var_16 = (short)-26255;
int zero = 0;
signed char var_18 = (signed char)104;
unsigned char var_19 = (unsigned char)72;
unsigned short var_20 = (unsigned short)15605;
unsigned int var_21 = 1063182335U;
signed char var_22 = (signed char)52;
int var_23 = 2065535564;
signed char var_24 = (signed char)48;
unsigned short var_25 = (unsigned short)1204;
unsigned long long int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 13313227067829180640ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
