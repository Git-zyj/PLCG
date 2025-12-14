#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-5;
unsigned long long int var_5 = 1894964025097818682ULL;
unsigned short var_7 = (unsigned short)25331;
short var_12 = (short)-2625;
int zero = 0;
signed char var_14 = (signed char)-43;
int var_15 = 2097095123;
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
