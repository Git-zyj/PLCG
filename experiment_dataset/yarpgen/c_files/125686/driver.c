#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3588027859U;
int var_6 = 2079101589;
unsigned long long int var_13 = 14961163579004723767ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)44189;
unsigned int var_20 = 3716654161U;
short var_21 = (short)-7474;
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
