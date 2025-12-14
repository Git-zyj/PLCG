#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14864;
unsigned short var_4 = (unsigned short)45885;
short var_7 = (short)26414;
short var_9 = (short)10967;
int zero = 0;
unsigned int var_11 = 1779243487U;
short var_12 = (short)24744;
short var_13 = (short)20891;
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
