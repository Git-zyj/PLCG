#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1619275818;
unsigned char var_10 = (unsigned char)235;
unsigned short var_12 = (unsigned short)552;
long long int var_16 = 8661271477691747214LL;
int zero = 0;
unsigned char var_17 = (unsigned char)74;
unsigned short var_18 = (unsigned short)35937;
unsigned long long int var_19 = 5739717403870334005ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
