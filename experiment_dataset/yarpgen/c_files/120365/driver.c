#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14405146282610629419ULL;
unsigned short var_3 = (unsigned short)19752;
short var_5 = (short)-202;
int zero = 0;
unsigned char var_14 = (unsigned char)92;
long long int var_15 = -8766666738587623609LL;
unsigned long long int var_16 = 64124792628176090ULL;
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
