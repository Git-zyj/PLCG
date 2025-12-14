#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -1396674382;
unsigned long long int var_6 = 4243020926107137559ULL;
int var_8 = -1473903489;
int var_9 = 1176304753;
int zero = 0;
signed char var_10 = (signed char)-15;
signed char var_11 = (signed char)-14;
signed char var_12 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
