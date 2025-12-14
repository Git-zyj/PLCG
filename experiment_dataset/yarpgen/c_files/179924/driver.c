#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4099;
unsigned short var_2 = (unsigned short)37701;
unsigned int var_5 = 676391637U;
long long int var_7 = 3523704874265495123LL;
unsigned long long int var_9 = 17085040451613750252ULL;
unsigned long long int var_14 = 5100313036466098524ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)46794;
unsigned char var_18 = (unsigned char)34;
unsigned int var_19 = 1918067284U;
void init() {
}

void checksum() {
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
