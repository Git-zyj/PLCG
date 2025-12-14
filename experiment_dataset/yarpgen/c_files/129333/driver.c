#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1600392776;
short var_14 = (short)26499;
short var_18 = (short)-18124;
short var_19 = (short)-20314;
int zero = 0;
short var_20 = (short)1150;
short var_21 = (short)28619;
short var_22 = (short)13749;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
