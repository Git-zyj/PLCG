#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -499879831845625248LL;
unsigned char var_3 = (unsigned char)188;
unsigned long long int var_4 = 5462384575189845241ULL;
unsigned char var_6 = (unsigned char)47;
unsigned char var_7 = (unsigned char)62;
signed char var_11 = (signed char)74;
int zero = 0;
unsigned char var_17 = (unsigned char)48;
unsigned char var_18 = (unsigned char)115;
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
