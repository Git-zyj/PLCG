#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
unsigned int var_1 = 841036318U;
unsigned long long int var_5 = 4310632607108813417ULL;
short var_7 = (short)-31865;
int zero = 0;
int var_13 = -1577597010;
unsigned int var_14 = 3193830170U;
unsigned long long int var_15 = 7817935341427718692ULL;
int var_16 = -487983260;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
