#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)136;
signed char var_5 = (signed char)3;
unsigned char var_10 = (unsigned char)42;
int zero = 0;
unsigned short var_14 = (unsigned short)7164;
unsigned short var_15 = (unsigned short)40047;
unsigned char var_16 = (unsigned char)187;
unsigned short var_17 = (unsigned short)19556;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
