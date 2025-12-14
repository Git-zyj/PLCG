#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)693;
unsigned int var_4 = 634467169U;
int var_6 = 1654162129;
long long int var_7 = 8000085833603231474LL;
unsigned short var_8 = (unsigned short)41857;
unsigned long long int var_9 = 12482243733796391482ULL;
unsigned char var_10 = (unsigned char)44;
unsigned short var_13 = (unsigned short)64499;
int zero = 0;
short var_15 = (short)11020;
long long int var_16 = -3585650880596169288LL;
long long int var_17 = -7274399624786556178LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
