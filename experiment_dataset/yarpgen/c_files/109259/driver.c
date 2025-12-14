#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23697;
short var_11 = (short)2882;
signed char var_13 = (signed char)-125;
short var_16 = (short)26115;
int zero = 0;
unsigned long long int var_17 = 12031908600222818464ULL;
int var_18 = 689938605;
unsigned short var_19 = (unsigned short)26847;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
