#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_7 = 732616130;
unsigned char var_10 = (unsigned char)160;
unsigned char var_11 = (unsigned char)212;
unsigned short var_12 = (unsigned short)13268;
int zero = 0;
unsigned long long int var_14 = 15938723987294611444ULL;
unsigned short var_15 = (unsigned short)22195;
signed char var_16 = (signed char)-33;
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
