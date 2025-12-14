#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1222188952U;
signed char var_7 = (signed char)-2;
long long int var_12 = 4691446714193926836LL;
int zero = 0;
signed char var_20 = (signed char)3;
int var_21 = 371361379;
unsigned int var_22 = 4145637051U;
short var_23 = (short)16470;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
