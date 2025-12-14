#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
unsigned long long int var_5 = 7025654533364325410ULL;
int var_11 = 373145541;
int zero = 0;
long long int var_17 = 8053904919755222735LL;
unsigned int var_18 = 1456921470U;
unsigned long long int var_19 = 6734028592124715347ULL;
short var_20 = (short)559;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
