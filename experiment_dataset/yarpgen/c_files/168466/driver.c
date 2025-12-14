#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
signed char var_4 = (signed char)24;
long long int var_8 = 4122844970948304030LL;
unsigned int var_10 = 1277447363U;
short var_16 = (short)-18083;
signed char var_18 = (signed char)-124;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2675976098U;
short var_22 = (short)-18572;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
