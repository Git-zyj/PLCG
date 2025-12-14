#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7332510306670052326LL;
int var_7 = 1981596864;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1964945858U;
int zero = 0;
long long int var_14 = 1365089274138799205LL;
signed char var_15 = (signed char)18;
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
