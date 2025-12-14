#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1331242170564929981LL;
unsigned long long int var_1 = 2776459503799262476ULL;
signed char var_2 = (signed char)69;
short var_3 = (short)-30824;
signed char var_4 = (signed char)37;
unsigned long long int var_6 = 40337264836683120ULL;
long long int var_7 = -358182838704998081LL;
short var_8 = (short)-244;
int var_9 = -1995450181;
int zero = 0;
unsigned int var_11 = 2192067209U;
short var_12 = (short)-15906;
void init() {
}

void checksum() {
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
