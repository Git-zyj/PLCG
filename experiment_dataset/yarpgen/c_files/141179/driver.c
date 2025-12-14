#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9838930355105598644ULL;
signed char var_9 = (signed char)-111;
unsigned long long int var_11 = 7642686965988300724ULL;
unsigned long long int var_14 = 10811867523064620160ULL;
int zero = 0;
unsigned long long int var_15 = 9155991254778139065ULL;
int var_16 = -1003620260;
int var_17 = 2045710494;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
