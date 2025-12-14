#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)10;
signed char var_6 = (signed char)-121;
short var_8 = (short)-13505;
signed char var_12 = (signed char)90;
int zero = 0;
signed char var_20 = (signed char)42;
signed char var_21 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
