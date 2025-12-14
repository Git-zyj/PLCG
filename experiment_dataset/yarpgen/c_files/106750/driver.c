#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10880;
unsigned long long int var_3 = 4508647350219113099ULL;
short var_6 = (short)26715;
unsigned char var_9 = (unsigned char)126;
unsigned char var_13 = (unsigned char)45;
unsigned char var_14 = (unsigned char)139;
unsigned long long int var_16 = 8354974237357316421ULL;
int zero = 0;
short var_17 = (short)-499;
unsigned long long int var_18 = 643441205255787863ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
