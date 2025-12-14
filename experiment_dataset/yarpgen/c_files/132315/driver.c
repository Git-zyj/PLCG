#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)32;
unsigned char var_3 = (unsigned char)204;
unsigned long long int var_5 = 2546201232168198655ULL;
unsigned int var_6 = 1949375342U;
short var_8 = (short)-11599;
unsigned char var_9 = (unsigned char)137;
signed char var_10 = (signed char)-109;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4265962773U;
short var_14 = (short)-18907;
short var_15 = (short)-14421;
int zero = 0;
unsigned char var_16 = (unsigned char)98;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4104750817U;
unsigned char var_20 = (unsigned char)248;
void init() {
}

void checksum() {
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
