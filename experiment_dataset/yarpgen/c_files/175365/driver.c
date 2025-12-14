#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)111;
unsigned int var_6 = 41301888U;
int var_7 = 1247860165;
unsigned short var_12 = (unsigned short)55507;
int zero = 0;
unsigned char var_14 = (unsigned char)12;
unsigned int var_15 = 1683491637U;
void init() {
}

void checksum() {
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
