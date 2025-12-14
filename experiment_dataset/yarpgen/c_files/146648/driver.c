#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -103286434;
unsigned int var_3 = 3779099553U;
int var_5 = 356681104;
signed char var_6 = (signed char)-68;
_Bool var_7 = (_Bool)1;
int var_8 = 1763082123;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1457324536U;
int zero = 0;
signed char var_14 = (signed char)37;
long long int var_15 = -6484281460883463133LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
