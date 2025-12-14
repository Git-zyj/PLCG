#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 92428567U;
int var_2 = -1317402469;
unsigned long long int var_10 = 1312825057476323806ULL;
int zero = 0;
short var_11 = (short)-1855;
unsigned int var_12 = 619916394U;
unsigned int var_13 = 1367472777U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
