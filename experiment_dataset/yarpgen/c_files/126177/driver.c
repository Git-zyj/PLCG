#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)19475;
unsigned short var_6 = (unsigned short)42158;
unsigned short var_8 = (unsigned short)34897;
int var_9 = -1143968341;
int zero = 0;
int var_12 = -1842279383;
int var_13 = 749784492;
void init() {
}

void checksum() {
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
