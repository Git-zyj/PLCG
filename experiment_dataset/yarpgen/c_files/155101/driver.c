#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3656411882U;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)-89;
long long int var_10 = -1214317651730851981LL;
int zero = 0;
unsigned int var_11 = 1347930180U;
short var_12 = (short)-23116;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
