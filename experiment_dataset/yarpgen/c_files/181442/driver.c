#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1590944020718411841ULL;
unsigned int var_3 = 367428237U;
unsigned char var_8 = (unsigned char)104;
short var_10 = (short)-30846;
unsigned int var_17 = 1534160334U;
int zero = 0;
long long int var_19 = 556275763148900320LL;
unsigned long long int var_20 = 15079962764924391509ULL;
void init() {
}

void checksum() {
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
