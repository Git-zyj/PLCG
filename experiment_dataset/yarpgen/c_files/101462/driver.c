#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4924;
unsigned int var_1 = 1286300875U;
signed char var_2 = (signed char)88;
signed char var_3 = (signed char)6;
unsigned int var_4 = 583094257U;
signed char var_5 = (signed char)-124;
signed char var_6 = (signed char)50;
signed char var_8 = (signed char)36;
short var_9 = (short)-30732;
int zero = 0;
signed char var_10 = (signed char)-42;
signed char var_11 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
