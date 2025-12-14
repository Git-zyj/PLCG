#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-54;
int var_18 = 46500652;
int zero = 0;
unsigned long long int var_19 = 3515376973015982871ULL;
int var_20 = 1845763761;
short var_21 = (short)17562;
signed char var_22 = (signed char)80;
signed char var_23 = (signed char)-117;
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
