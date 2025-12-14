#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6938809807524627283LL;
signed char var_7 = (signed char)-52;
long long int var_8 = -2731462861632082706LL;
short var_11 = (short)1433;
int zero = 0;
unsigned int var_13 = 253466919U;
signed char var_14 = (signed char)-14;
unsigned int var_15 = 2891754837U;
long long int var_16 = 2027748270058027728LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
