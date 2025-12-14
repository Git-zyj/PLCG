#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1521428376247974522LL;
unsigned short var_1 = (unsigned short)7987;
int var_4 = 2028459827;
int zero = 0;
int var_14 = 828623098;
unsigned short var_15 = (unsigned short)23680;
unsigned char var_16 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
