#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)18603;
signed char var_9 = (signed char)-95;
int var_11 = 2125959648;
int zero = 0;
int var_12 = 1151525660;
unsigned int var_13 = 172331804U;
int var_14 = -1151973227;
int var_15 = -2081824211;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
