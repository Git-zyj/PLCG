#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
unsigned int var_1 = 893680341U;
unsigned char var_10 = (unsigned char)127;
int var_12 = -520426395;
unsigned short var_14 = (unsigned short)7940;
int zero = 0;
unsigned long long int var_17 = 631944602369976456ULL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)39208;
unsigned char var_20 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
