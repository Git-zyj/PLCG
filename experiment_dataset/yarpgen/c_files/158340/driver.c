#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 6389033520030014936ULL;
unsigned long long int var_13 = 10648333246147929685ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-10055;
short var_20 = (short)16306;
void init() {
}

void checksum() {
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
