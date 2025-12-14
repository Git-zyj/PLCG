#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 514226160U;
unsigned short var_4 = (unsigned short)55703;
unsigned int var_5 = 2038351722U;
int zero = 0;
unsigned int var_13 = 1017772636U;
unsigned int var_14 = 1637207110U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
