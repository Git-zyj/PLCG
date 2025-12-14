#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -814655483;
signed char var_7 = (signed char)-38;
short var_12 = (short)31876;
int var_16 = -1209765421;
int zero = 0;
unsigned long long int var_18 = 10335042159564745797ULL;
long long int var_19 = -7206413059568506773LL;
long long int var_20 = -1544946996116510521LL;
void init() {
}

void checksum() {
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
