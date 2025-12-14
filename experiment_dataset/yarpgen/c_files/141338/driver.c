#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1179624682568495369LL;
unsigned char var_4 = (unsigned char)38;
long long int var_8 = -7945519665287357643LL;
int zero = 0;
unsigned short var_10 = (unsigned short)36773;
int var_11 = -762236582;
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
