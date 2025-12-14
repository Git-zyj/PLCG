#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)111;
long long int var_16 = -6305967356940853030LL;
long long int var_18 = -1318050821627350027LL;
long long int var_19 = -3572868650590384494LL;
int zero = 0;
int var_20 = 75270049;
unsigned char var_21 = (unsigned char)18;
short var_22 = (short)30509;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
