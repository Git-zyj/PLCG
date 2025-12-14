#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 564300378;
signed char var_3 = (signed char)-13;
int var_4 = -333550620;
unsigned int var_5 = 4147217019U;
unsigned long long int var_8 = 14879961899561698063ULL;
unsigned int var_10 = 1142925748U;
long long int var_11 = -8074566552650655979LL;
int zero = 0;
unsigned int var_13 = 3597942803U;
unsigned int var_14 = 919840485U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)115;
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
