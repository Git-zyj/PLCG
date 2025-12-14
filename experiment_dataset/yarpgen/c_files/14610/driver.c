#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)66;
signed char var_6 = (signed char)6;
unsigned int var_7 = 3617061406U;
int var_12 = 1627676613;
short var_14 = (short)4146;
int zero = 0;
unsigned int var_17 = 1388077269U;
unsigned short var_18 = (unsigned short)34683;
int var_19 = 19476112;
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
