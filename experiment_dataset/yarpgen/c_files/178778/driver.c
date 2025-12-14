#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
unsigned short var_3 = (unsigned short)37146;
unsigned long long int var_4 = 9132191772854470598ULL;
unsigned short var_11 = (unsigned short)15562;
int zero = 0;
unsigned int var_13 = 2001281796U;
unsigned int var_14 = 873736158U;
short var_15 = (short)-11982;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
