#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 5539085002893621809LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)18;
signed char var_14 = (signed char)60;
long long int var_15 = -5422371291541057296LL;
unsigned int var_16 = 1996775223U;
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
