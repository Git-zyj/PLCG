#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2332030120904937172LL;
unsigned short var_5 = (unsigned short)41808;
unsigned char var_13 = (unsigned char)76;
int zero = 0;
unsigned int var_15 = 609771533U;
unsigned char var_16 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
