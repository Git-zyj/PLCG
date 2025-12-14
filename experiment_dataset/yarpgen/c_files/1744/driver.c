#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1560023391;
unsigned char var_5 = (unsigned char)84;
int var_9 = -567700987;
unsigned long long int var_10 = 16356725690389969228ULL;
unsigned char var_12 = (unsigned char)228;
unsigned long long int var_13 = 12240392844980455465ULL;
int zero = 0;
long long int var_17 = 6875719245346413182LL;
unsigned char var_18 = (unsigned char)56;
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
