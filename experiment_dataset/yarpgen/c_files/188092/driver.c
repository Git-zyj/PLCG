#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)57;
unsigned int var_2 = 486955801U;
int var_11 = -1200808218;
signed char var_13 = (signed char)84;
short var_14 = (short)-26846;
int zero = 0;
unsigned long long int var_15 = 9131907832637765693ULL;
unsigned int var_16 = 1908480201U;
short var_17 = (short)12841;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
