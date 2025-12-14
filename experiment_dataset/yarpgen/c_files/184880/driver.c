#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1832025254;
long long int var_14 = 1843277136688442351LL;
int zero = 0;
unsigned long long int var_15 = 3798244966587955676ULL;
unsigned char var_16 = (unsigned char)27;
unsigned short var_17 = (unsigned short)37665;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
