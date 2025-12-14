#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_9 = (unsigned short)56500;
int var_14 = 894592544;
signed char var_16 = (signed char)53;
int zero = 0;
unsigned long long int var_20 = 5155698871943770900ULL;
int var_21 = -369581300;
int var_22 = 1997759371;
int var_23 = 370920593;
unsigned short var_24 = (unsigned short)25431;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
