#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1077931756U;
int var_10 = 2046994775;
_Bool var_12 = (_Bool)0;
unsigned int var_16 = 1149795055U;
_Bool var_17 = (_Bool)0;
signed char var_19 = (signed char)1;
int zero = 0;
long long int var_20 = 6943438318604800486LL;
short var_21 = (short)-20340;
short var_22 = (short)-27613;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
