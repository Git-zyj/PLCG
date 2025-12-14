#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11660;
unsigned long long int var_6 = 5303442631712726002ULL;
unsigned int var_8 = 733150339U;
int zero = 0;
unsigned long long int var_10 = 14790481477353968593ULL;
unsigned char var_11 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
