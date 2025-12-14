#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14387647559041468159ULL;
unsigned char var_4 = (unsigned char)23;
int var_9 = 1989306846;
int zero = 0;
unsigned short var_10 = (unsigned short)36848;
unsigned short var_11 = (unsigned short)63445;
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
