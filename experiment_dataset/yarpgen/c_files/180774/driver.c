#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 615654311423003363LL;
long long int var_5 = 8279186697637475160LL;
long long int var_7 = -6309244691315531817LL;
unsigned int var_9 = 1215528156U;
unsigned char var_11 = (unsigned char)8;
int zero = 0;
int var_13 = -739043348;
short var_14 = (short)7087;
long long int var_15 = -1434624137690393863LL;
unsigned char var_16 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
