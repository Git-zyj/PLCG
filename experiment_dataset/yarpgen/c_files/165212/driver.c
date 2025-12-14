#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17134309765514979873ULL;
short var_1 = (short)2529;
unsigned int var_3 = 1856050963U;
long long int var_5 = -5200655734879414502LL;
unsigned char var_7 = (unsigned char)168;
unsigned char var_10 = (unsigned char)83;
unsigned short var_16 = (unsigned short)22400;
long long int var_17 = 6972890452586022185LL;
unsigned short var_18 = (unsigned short)48839;
int zero = 0;
int var_19 = -415908886;
unsigned char var_20 = (unsigned char)193;
unsigned short var_21 = (unsigned short)16662;
unsigned int var_22 = 4277180422U;
unsigned short var_23 = (unsigned short)51325;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
