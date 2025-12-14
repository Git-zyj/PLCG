#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2145974159023192440ULL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-2319;
short var_8 = (short)15426;
int zero = 0;
signed char var_13 = (signed char)-112;
unsigned short var_14 = (unsigned short)12489;
short var_15 = (short)10778;
short var_16 = (short)8015;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
