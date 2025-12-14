#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1623480890;
unsigned int var_18 = 1187948740U;
int zero = 0;
unsigned long long int var_19 = 8320573118621968409ULL;
short var_20 = (short)4713;
unsigned char var_21 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
