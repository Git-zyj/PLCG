#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)105;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)38;
unsigned int var_9 = 2015417552U;
unsigned short var_11 = (unsigned short)52567;
int zero = 0;
short var_17 = (short)-9004;
unsigned int var_18 = 2703685232U;
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
