#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
long long int var_1 = 961817088999589923LL;
unsigned char var_2 = (unsigned char)42;
long long int var_11 = 1697733432304670159LL;
int zero = 0;
unsigned char var_12 = (unsigned char)157;
long long int var_13 = -4813063021748186062LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
