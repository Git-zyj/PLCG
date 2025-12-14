#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8369133517271592908LL;
long long int var_5 = 4409200698002945463LL;
long long int var_6 = 7630187153742678072LL;
int zero = 0;
short var_10 = (short)-1023;
unsigned char var_11 = (unsigned char)32;
signed char var_12 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
