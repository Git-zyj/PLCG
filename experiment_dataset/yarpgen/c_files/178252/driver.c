#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 420195329795439196LL;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-55;
int zero = 0;
unsigned int var_13 = 2065654377U;
signed char var_14 = (signed char)-24;
signed char var_15 = (signed char)-107;
short var_16 = (short)-20073;
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
