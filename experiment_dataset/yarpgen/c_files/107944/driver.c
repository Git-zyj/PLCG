#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1671895962;
unsigned char var_4 = (unsigned char)35;
int zero = 0;
short var_14 = (short)31168;
int var_15 = -1080842093;
unsigned long long int var_16 = 12451621065244478269ULL;
int var_17 = -202078116;
long long int var_18 = -1203381406147577401LL;
unsigned short var_19 = (unsigned short)6154;
unsigned char var_20 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
