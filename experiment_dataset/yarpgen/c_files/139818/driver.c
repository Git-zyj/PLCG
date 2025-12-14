#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1381622543;
long long int var_4 = 877628713729372455LL;
long long int var_14 = 7074435398668303345LL;
signed char var_15 = (signed char)-100;
int zero = 0;
int var_19 = 403352794;
long long int var_20 = 600608218542836851LL;
unsigned char var_21 = (unsigned char)237;
long long int var_22 = -295461977422426177LL;
int var_23 = 1108544736;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
