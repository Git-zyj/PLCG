#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-114;
int var_7 = -825040193;
unsigned int var_13 = 1136452658U;
int zero = 0;
signed char var_14 = (signed char)49;
_Bool var_15 = (_Bool)1;
long long int var_16 = -1540058652654370478LL;
long long int var_17 = -7050449092019000559LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
