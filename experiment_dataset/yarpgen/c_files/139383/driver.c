#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3514580389U;
unsigned int var_4 = 1043459857U;
signed char var_5 = (signed char)-125;
unsigned int var_7 = 313629038U;
long long int var_9 = 1469177445868640262LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 671817844U;
signed char var_18 = (signed char)-40;
signed char var_19 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
