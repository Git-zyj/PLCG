#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -383629789;
long long int var_3 = -1030275997234506029LL;
int var_6 = 2059820003;
int zero = 0;
long long int var_16 = 6304803449852327416LL;
short var_17 = (short)-1593;
int var_18 = -736836915;
int var_19 = -196573851;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
