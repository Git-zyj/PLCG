#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29376;
unsigned long long int var_7 = 12676756168735543402ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 17596527400196417418ULL;
int var_17 = -1622023576;
unsigned int var_18 = 2114028704U;
unsigned char var_19 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
