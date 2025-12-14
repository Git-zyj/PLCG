#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)149;
unsigned short var_6 = (unsigned short)54077;
unsigned short var_14 = (unsigned short)9604;
unsigned int var_16 = 4012526743U;
long long int var_18 = -5606043142475139176LL;
int zero = 0;
short var_19 = (short)6533;
unsigned int var_20 = 1345138476U;
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
