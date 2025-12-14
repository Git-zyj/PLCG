#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)223;
signed char var_10 = (signed char)-76;
unsigned char var_14 = (unsigned char)24;
short var_15 = (short)18248;
int zero = 0;
unsigned short var_17 = (unsigned short)36536;
unsigned short var_18 = (unsigned short)39748;
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
