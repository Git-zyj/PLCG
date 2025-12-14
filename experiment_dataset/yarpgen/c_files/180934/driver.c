#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1324971845;
long long int var_9 = 3123282149403981189LL;
int var_12 = 1309111036;
int zero = 0;
signed char var_13 = (signed char)53;
int var_14 = 1405337556;
signed char var_15 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
