#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)10124;
unsigned short var_9 = (unsigned short)64714;
int zero = 0;
long long int var_11 = 8403278481679983590LL;
unsigned long long int var_12 = 1841162649959543223ULL;
short var_13 = (short)-7372;
signed char var_14 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
