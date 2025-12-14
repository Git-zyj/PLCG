#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1228652316751868343ULL;
unsigned int var_1 = 3406721118U;
signed char var_2 = (signed char)67;
short var_6 = (short)14140;
signed char var_8 = (signed char)44;
signed char var_10 = (signed char)38;
unsigned int var_11 = 3942899965U;
int zero = 0;
unsigned char var_12 = (unsigned char)35;
short var_13 = (short)-7989;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
