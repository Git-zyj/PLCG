#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 818862078U;
int var_2 = 189805396;
unsigned short var_3 = (unsigned short)32260;
unsigned long long int var_6 = 12853265313393099166ULL;
int zero = 0;
unsigned long long int var_19 = 2727051469127603799ULL;
short var_20 = (short)-5395;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
