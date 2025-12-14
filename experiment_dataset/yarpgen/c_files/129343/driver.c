#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1331715678;
int var_2 = -1345524463;
unsigned char var_7 = (unsigned char)12;
int zero = 0;
short var_14 = (short)-11520;
unsigned short var_15 = (unsigned short)32687;
unsigned int var_16 = 3520783749U;
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
