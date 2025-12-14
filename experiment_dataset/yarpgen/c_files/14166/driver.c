#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-110;
signed char var_4 = (signed char)38;
signed char var_5 = (signed char)42;
signed char var_6 = (signed char)43;
signed char var_9 = (signed char)-73;
signed char var_10 = (signed char)-107;
signed char var_14 = (signed char)14;
short var_15 = (short)-18775;
short var_16 = (short)-11759;
int zero = 0;
short var_17 = (short)5734;
short var_18 = (short)-22403;
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
