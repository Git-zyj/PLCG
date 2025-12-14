#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21264;
unsigned short var_2 = (unsigned short)1293;
signed char var_3 = (signed char)68;
unsigned short var_4 = (unsigned short)44911;
int var_8 = 1682556573;
int zero = 0;
int var_10 = -456190282;
signed char var_11 = (signed char)80;
int var_12 = -359697307;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
