#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16531;
unsigned int var_3 = 3089202796U;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)124;
long long int var_11 = -4083590851581344132LL;
long long int var_12 = -1390466917862203022LL;
short var_13 = (short)7228;
short var_14 = (short)-24851;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
