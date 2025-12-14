#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16850;
short var_5 = (short)28847;
short var_8 = (short)-9647;
signed char var_10 = (signed char)-112;
signed char var_11 = (signed char)28;
signed char var_15 = (signed char)-96;
short var_16 = (short)13021;
int zero = 0;
int var_17 = 855638047;
long long int var_18 = -1904218372105107965LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
