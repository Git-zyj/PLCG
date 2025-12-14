#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7666496353990269799LL;
unsigned long long int var_3 = 7832918375949066005ULL;
short var_6 = (short)14245;
unsigned long long int var_10 = 15666978238226403618ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2043882624U;
unsigned short var_13 = (unsigned short)19453;
unsigned char var_14 = (unsigned char)217;
short var_15 = (short)-23725;
unsigned long long int var_16 = 13710121442954143173ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
