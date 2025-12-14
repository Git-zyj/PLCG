#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
signed char var_15 = (signed char)36;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-17;
_Bool var_21 = (_Bool)1;
long long int var_22 = 9034136319356108656LL;
unsigned long long int var_23 = 9481008378367950042ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
