#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)32594;
unsigned char var_9 = (unsigned char)195;
short var_11 = (short)-26769;
int zero = 0;
unsigned char var_15 = (unsigned char)209;
int var_16 = -1958267383;
int var_17 = 742471840;
long long int var_18 = -3025255787488830069LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
