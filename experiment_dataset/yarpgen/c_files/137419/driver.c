#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1250479182U;
int var_3 = -91854566;
signed char var_7 = (signed char)-106;
int var_14 = -1491909118;
int zero = 0;
signed char var_19 = (signed char)-77;
short var_20 = (short)-11377;
void init() {
}

void checksum() {
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
