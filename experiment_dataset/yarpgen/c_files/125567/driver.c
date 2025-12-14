#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22402;
short var_7 = (short)9984;
short var_8 = (short)32079;
short var_9 = (short)-6871;
short var_11 = (short)22617;
int zero = 0;
signed char var_20 = (signed char)67;
signed char var_21 = (signed char)-27;
short var_22 = (short)-17303;
signed char var_23 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
