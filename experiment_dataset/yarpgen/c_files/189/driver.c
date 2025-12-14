#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-24;
unsigned char var_10 = (unsigned char)44;
long long int var_12 = -5535391916352635768LL;
int zero = 0;
int var_13 = -1912276262;
unsigned short var_14 = (unsigned short)4685;
unsigned char var_15 = (unsigned char)49;
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
