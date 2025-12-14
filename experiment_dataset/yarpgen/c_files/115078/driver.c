#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6179538656078267918ULL;
unsigned long long int var_2 = 646168250173141145ULL;
long long int var_6 = 6964025081924485162LL;
int var_8 = 1633903477;
unsigned long long int var_11 = 11418727461833475369ULL;
signed char var_13 = (signed char)78;
int zero = 0;
signed char var_14 = (signed char)-110;
unsigned long long int var_15 = 2881831863603228779ULL;
long long int var_16 = 4517177767889418839LL;
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
