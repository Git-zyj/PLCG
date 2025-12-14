#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16718;
signed char var_2 = (signed char)15;
unsigned int var_13 = 2579240491U;
short var_15 = (short)-20339;
int zero = 0;
short var_17 = (short)-26945;
long long int var_18 = 1636287674223189588LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6418532442786222650LL;
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
