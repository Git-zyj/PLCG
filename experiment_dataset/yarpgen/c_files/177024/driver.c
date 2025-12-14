#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24428;
short var_7 = (short)3766;
short var_8 = (short)-7138;
short var_11 = (short)-3224;
short var_17 = (short)1027;
int zero = 0;
short var_19 = (short)-8308;
short var_20 = (short)-1789;
short var_21 = (short)-15355;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
