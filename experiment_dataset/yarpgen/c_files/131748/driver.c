#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7227151762489398943LL;
signed char var_2 = (signed char)-84;
unsigned int var_5 = 1157555428U;
signed char var_15 = (signed char)104;
int zero = 0;
unsigned int var_16 = 3353691652U;
unsigned long long int var_17 = 13076600041681220821ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
