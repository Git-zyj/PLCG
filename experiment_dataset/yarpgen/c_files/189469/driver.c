#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-57;
unsigned int var_8 = 904542858U;
long long int var_13 = 6413567135829524219LL;
unsigned int var_16 = 4013433937U;
int zero = 0;
int var_17 = -43064338;
long long int var_18 = 94843506613296180LL;
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
