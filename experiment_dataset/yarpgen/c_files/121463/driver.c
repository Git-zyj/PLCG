#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
long long int var_2 = -768921486015721792LL;
int var_5 = 1588800819;
unsigned long long int var_6 = 15340510298704949046ULL;
long long int var_10 = -4249679328626098774LL;
int var_14 = -791016077;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 3455259128045444370LL;
unsigned int var_20 = 2915849847U;
void init() {
}

void checksum() {
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
