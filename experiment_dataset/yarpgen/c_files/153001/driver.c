#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)143;
int var_3 = 23416209;
short var_5 = (short)-17254;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)37811;
unsigned short var_12 = (unsigned short)35604;
int zero = 0;
int var_18 = -1134797537;
int var_19 = 790328458;
void init() {
}

void checksum() {
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
