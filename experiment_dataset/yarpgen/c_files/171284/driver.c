#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 994872235;
unsigned short var_5 = (unsigned short)17579;
unsigned char var_12 = (unsigned char)51;
int var_14 = 1122701970;
unsigned short var_18 = (unsigned short)39348;
int zero = 0;
unsigned short var_20 = (unsigned short)39211;
unsigned char var_21 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
