#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-13;
unsigned short var_8 = (unsigned short)32868;
int var_14 = 1787521564;
long long int var_19 = -5101520379371294223LL;
int zero = 0;
long long int var_20 = -2552216487420285984LL;
unsigned int var_21 = 310906524U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
