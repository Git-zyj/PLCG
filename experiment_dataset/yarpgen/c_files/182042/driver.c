#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24880;
unsigned long long int var_6 = 2990489764288683990ULL;
int var_10 = -1862467699;
short var_12 = (short)29336;
int zero = 0;
unsigned char var_13 = (unsigned char)185;
unsigned int var_14 = 2810953107U;
int var_15 = 910311551;
unsigned long long int var_16 = 7810012547348553933ULL;
void init() {
}

void checksum() {
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
