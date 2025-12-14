#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3026184762U;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3116269367U;
int zero = 0;
signed char var_15 = (signed char)-50;
short var_16 = (short)-31819;
void init() {
}

void checksum() {
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
