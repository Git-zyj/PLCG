#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)123;
unsigned short var_8 = (unsigned short)58033;
unsigned short var_14 = (unsigned short)12079;
long long int var_15 = -2281090957118683399LL;
unsigned char var_16 = (unsigned char)149;
int zero = 0;
unsigned long long int var_17 = 6755728711749421397ULL;
unsigned short var_18 = (unsigned short)14911;
void init() {
}

void checksum() {
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
