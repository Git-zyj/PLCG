#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9649059272923564393ULL;
_Bool var_14 = (_Bool)1;
long long int var_17 = -2237774147170239321LL;
int zero = 0;
unsigned int var_20 = 3341807641U;
long long int var_21 = -3843359286112004821LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
