#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
int var_1 = 1710536705;
unsigned char var_4 = (unsigned char)169;
short var_6 = (short)6801;
short var_7 = (short)31508;
short var_12 = (short)-26569;
long long int var_15 = -681233477455648707LL;
unsigned char var_16 = (unsigned char)37;
long long int var_17 = -8308083449179612269LL;
int zero = 0;
short var_20 = (short)24504;
signed char var_21 = (signed char)-116;
unsigned int var_22 = 1411259927U;
long long int var_23 = -1373486976333794531LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
