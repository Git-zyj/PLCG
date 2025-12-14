#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 881762887;
signed char var_5 = (signed char)-88;
signed char var_7 = (signed char)-18;
short var_9 = (short)20484;
int zero = 0;
signed char var_10 = (signed char)114;
long long int var_11 = -2562142761236670715LL;
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
