#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14118;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 10686614770796696492ULL;
short var_14 = (short)12717;
int zero = 0;
unsigned long long int var_16 = 6583448462051053993ULL;
unsigned int var_17 = 2531554907U;
long long int var_18 = 4098898740178247640LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
