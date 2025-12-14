#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)20709;
unsigned char var_14 = (unsigned char)120;
unsigned short var_15 = (unsigned short)2460;
int zero = 0;
unsigned char var_16 = (unsigned char)219;
unsigned short var_17 = (unsigned short)50899;
unsigned short var_18 = (unsigned short)51724;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
