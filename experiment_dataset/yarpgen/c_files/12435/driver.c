#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3447049003U;
unsigned int var_5 = 2313174980U;
short var_13 = (short)-25363;
signed char var_14 = (signed char)71;
int zero = 0;
signed char var_17 = (signed char)-39;
short var_18 = (short)10757;
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
