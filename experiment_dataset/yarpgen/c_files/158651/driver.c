#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
signed char var_2 = (signed char)-17;
signed char var_6 = (signed char)111;
int zero = 0;
signed char var_18 = (signed char)99;
signed char var_19 = (signed char)-124;
signed char var_20 = (signed char)-126;
signed char var_21 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
