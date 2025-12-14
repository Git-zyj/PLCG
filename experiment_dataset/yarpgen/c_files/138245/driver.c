#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1453876372;
short var_11 = (short)4455;
unsigned short var_14 = (unsigned short)15841;
int zero = 0;
long long int var_20 = -9005785120038244808LL;
unsigned short var_21 = (unsigned short)4711;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
