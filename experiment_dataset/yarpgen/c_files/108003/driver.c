#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -235855586;
long long int var_3 = 1443140008555801269LL;
unsigned int var_5 = 839803066U;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2928282120U;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 8978767544091060878LL;
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
