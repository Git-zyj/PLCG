#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16388;
short var_4 = (short)-4205;
signed char var_7 = (signed char)-20;
int var_9 = -533739756;
int zero = 0;
int var_16 = -701566361;
unsigned long long int var_17 = 13054394310960098903ULL;
void init() {
}

void checksum() {
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
