#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14607;
unsigned long long int var_4 = 933314009166805798ULL;
unsigned int var_6 = 2009964472U;
signed char var_8 = (signed char)88;
long long int var_9 = -5888939401061658072LL;
int zero = 0;
short var_10 = (short)-8139;
unsigned long long int var_11 = 11984398550361411385ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
