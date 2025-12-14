#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3466961911U;
unsigned int var_7 = 3770304672U;
signed char var_9 = (signed char)117;
unsigned int var_13 = 305029637U;
int zero = 0;
int var_17 = 887764251;
short var_18 = (short)16149;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
