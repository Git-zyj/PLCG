#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1112993304U;
signed char var_7 = (signed char)27;
short var_10 = (short)3916;
unsigned int var_11 = 361431502U;
int zero = 0;
unsigned short var_13 = (unsigned short)51644;
unsigned int var_14 = 288930264U;
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
