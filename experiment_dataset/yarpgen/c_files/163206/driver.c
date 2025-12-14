#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)12176;
unsigned int var_14 = 1961205403U;
int var_17 = -366263903;
signed char var_19 = (signed char)22;
int zero = 0;
long long int var_20 = 604513294278272892LL;
unsigned char var_21 = (unsigned char)38;
int var_22 = 1531696577;
int var_23 = -417611620;
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
