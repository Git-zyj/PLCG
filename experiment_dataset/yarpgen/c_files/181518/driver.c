#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1504668400;
int var_2 = 230138430;
unsigned short var_4 = (unsigned short)23369;
signed char var_8 = (signed char)79;
unsigned long long int var_10 = 11805685739486666737ULL;
unsigned int var_14 = 145067773U;
long long int var_16 = 5307678957608497091LL;
int zero = 0;
int var_17 = 564376125;
unsigned short var_18 = (unsigned short)5602;
long long int var_19 = -7719281324814494256LL;
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
