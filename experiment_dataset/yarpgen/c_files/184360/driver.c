#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 535376412U;
signed char var_8 = (signed char)14;
int var_11 = 827159200;
int zero = 0;
unsigned short var_14 = (unsigned short)32760;
unsigned long long int var_15 = 14356324992077801319ULL;
short var_16 = (short)747;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
