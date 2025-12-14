#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)9277;
unsigned short var_10 = (unsigned short)24413;
unsigned short var_12 = (unsigned short)39594;
int zero = 0;
unsigned short var_13 = (unsigned short)22260;
unsigned int var_14 = 3668239213U;
int var_15 = 1266841139;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
