#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-58;
int var_10 = 429667363;
int var_11 = 610919302;
signed char var_14 = (signed char)-119;
int zero = 0;
long long int var_19 = 6171563834620183362LL;
signed char var_20 = (signed char)-63;
short var_21 = (short)-17129;
signed char var_22 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
