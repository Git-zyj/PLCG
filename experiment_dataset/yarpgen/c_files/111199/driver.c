#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 963461743;
long long int var_2 = 580635385167663498LL;
int var_12 = 263628945;
long long int var_13 = -7622403703179833931LL;
long long int var_14 = 1129876960897185680LL;
long long int var_16 = 7918834269122843926LL;
int zero = 0;
long long int var_17 = 297704265302489178LL;
int var_18 = 1477898128;
void init() {
}

void checksum() {
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
