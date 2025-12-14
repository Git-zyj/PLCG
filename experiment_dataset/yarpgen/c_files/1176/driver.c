#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7607465315143146050LL;
int var_5 = 275793120;
unsigned long long int var_6 = 9303857341885578440ULL;
signed char var_8 = (signed char)-40;
short var_11 = (short)-5025;
int zero = 0;
int var_15 = 1841089740;
short var_16 = (short)21750;
void init() {
}

void checksum() {
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
