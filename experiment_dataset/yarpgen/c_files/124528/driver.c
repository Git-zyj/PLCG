#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
unsigned short var_1 = (unsigned short)39376;
unsigned short var_4 = (unsigned short)53621;
int var_7 = 1782181706;
int zero = 0;
unsigned char var_11 = (unsigned char)149;
signed char var_12 = (signed char)126;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
