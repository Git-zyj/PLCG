#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1711953013;
unsigned long long int var_3 = 5490157550658951365ULL;
signed char var_4 = (signed char)-120;
unsigned long long int var_8 = 2332489250734480207ULL;
int zero = 0;
short var_11 = (short)-269;
short var_12 = (short)-22373;
short var_13 = (short)-19847;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
