#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1739129570;
signed char var_2 = (signed char)123;
short var_3 = (short)4890;
signed char var_6 = (signed char)-80;
int zero = 0;
int var_10 = 52500127;
short var_11 = (short)-3164;
signed char var_12 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
