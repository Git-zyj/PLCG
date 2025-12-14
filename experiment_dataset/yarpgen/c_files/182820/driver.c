#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
unsigned char var_5 = (unsigned char)112;
int var_6 = 278384670;
int var_8 = -1727167636;
unsigned long long int var_9 = 1585049303524928425ULL;
int var_11 = 383667970;
int zero = 0;
int var_16 = 1893442303;
long long int var_17 = -1274062038889585259LL;
int var_18 = -1130069284;
void init() {
}

void checksum() {
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
