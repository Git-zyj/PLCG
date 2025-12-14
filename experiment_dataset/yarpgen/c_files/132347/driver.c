#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -91819706;
long long int var_5 = 922529404594460714LL;
int var_9 = -1049410525;
short var_11 = (short)27234;
int zero = 0;
int var_12 = -730244347;
int var_13 = -2035809781;
void init() {
}

void checksum() {
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
