#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33267;
unsigned short var_4 = (unsigned short)6064;
signed char var_6 = (signed char)39;
signed char var_8 = (signed char)96;
int zero = 0;
int var_10 = 109432604;
unsigned short var_11 = (unsigned short)54863;
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
