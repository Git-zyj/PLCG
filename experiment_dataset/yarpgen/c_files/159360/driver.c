#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3786010798U;
int var_2 = -2138983332;
unsigned int var_3 = 3203782630U;
unsigned int var_4 = 1457331441U;
unsigned char var_5 = (unsigned char)191;
unsigned int var_7 = 496144088U;
signed char var_8 = (signed char)35;
signed char var_9 = (signed char)107;
int zero = 0;
signed char var_11 = (signed char)71;
signed char var_12 = (signed char)-113;
signed char var_13 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
