#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3376072250U;
unsigned long long int var_1 = 3498435265864254221ULL;
short var_2 = (short)8349;
unsigned long long int var_4 = 18270398342660233214ULL;
signed char var_6 = (signed char)3;
int zero = 0;
signed char var_11 = (signed char)39;
int var_12 = -1207062991;
int var_13 = -308450525;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
