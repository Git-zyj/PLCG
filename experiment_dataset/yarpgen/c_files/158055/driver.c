#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)39234;
unsigned int var_9 = 191804274U;
unsigned short var_13 = (unsigned short)51974;
int zero = 0;
unsigned int var_15 = 3853204565U;
unsigned short var_16 = (unsigned short)2893;
void init() {
}

void checksum() {
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
