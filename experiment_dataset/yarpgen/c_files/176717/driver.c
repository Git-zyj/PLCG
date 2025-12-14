#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned long long int var_1 = 10839270085625730875ULL;
_Bool var_2 = (_Bool)1;
short var_8 = (short)-30307;
unsigned int var_9 = 336420061U;
unsigned long long int var_10 = 14281802643227767378ULL;
int zero = 0;
short var_11 = (short)-2102;
int var_12 = 1236346539;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
