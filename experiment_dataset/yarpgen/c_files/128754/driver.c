#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3073014468417331923ULL;
int var_3 = 1841814753;
short var_5 = (short)-26616;
signed char var_6 = (signed char)28;
short var_8 = (short)30066;
short var_9 = (short)20772;
short var_10 = (short)-10467;
int zero = 0;
int var_11 = 1588457786;
long long int var_12 = 6700314243139410222LL;
void init() {
}

void checksum() {
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
