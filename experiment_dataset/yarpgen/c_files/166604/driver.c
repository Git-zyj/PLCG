#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37034;
short var_6 = (short)5770;
short var_9 = (short)28598;
short var_11 = (short)21481;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 14606543603249275858ULL;
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
