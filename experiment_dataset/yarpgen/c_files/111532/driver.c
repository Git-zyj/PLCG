#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -71853439;
short var_9 = (short)-15670;
unsigned int var_10 = 1538784737U;
unsigned int var_13 = 3072069110U;
int var_14 = -152526166;
int zero = 0;
signed char var_18 = (signed char)-57;
short var_19 = (short)-25068;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
