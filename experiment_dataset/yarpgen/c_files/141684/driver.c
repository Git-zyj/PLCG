#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 929121659;
unsigned char var_14 = (unsigned char)11;
unsigned char var_16 = (unsigned char)239;
unsigned short var_17 = (unsigned short)57916;
int zero = 0;
long long int var_20 = 6135758651404412458LL;
unsigned short var_21 = (unsigned short)41714;
unsigned int var_22 = 3037926878U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
