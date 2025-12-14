#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 1928736734;
_Bool var_13 = (_Bool)0;
long long int var_14 = 3639933822433668845LL;
int zero = 0;
unsigned char var_20 = (unsigned char)18;
short var_21 = (short)-16191;
short var_22 = (short)-14745;
long long int var_23 = 2463746498810394319LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
