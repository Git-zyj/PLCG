#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)195;
short var_13 = (short)31739;
long long int var_16 = -4248333650559937861LL;
int zero = 0;
signed char var_20 = (signed char)99;
long long int var_21 = 9048184860892494127LL;
short var_22 = (short)30972;
signed char var_23 = (signed char)52;
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
