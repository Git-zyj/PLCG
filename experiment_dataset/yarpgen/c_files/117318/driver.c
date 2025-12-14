#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)7;
unsigned short var_5 = (unsigned short)35346;
unsigned short var_15 = (unsigned short)10197;
unsigned char var_17 = (unsigned char)133;
unsigned long long int var_18 = 4828384737035119831ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)222;
unsigned short var_21 = (unsigned short)9557;
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
