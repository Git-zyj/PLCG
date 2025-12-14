#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3536142395U;
signed char var_1 = (signed char)99;
short var_8 = (short)5616;
int zero = 0;
long long int var_12 = 5539855512997105641LL;
int var_13 = 1544286692;
int var_14 = -1337273635;
long long int var_15 = -5908334728185394213LL;
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
