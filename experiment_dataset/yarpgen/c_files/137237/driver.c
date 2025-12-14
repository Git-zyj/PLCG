#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
long long int var_4 = 1632865799990383637LL;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)10;
int zero = 0;
int var_16 = -95023062;
signed char var_17 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
