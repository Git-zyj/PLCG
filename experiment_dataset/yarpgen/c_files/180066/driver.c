#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1029314415U;
signed char var_3 = (signed char)125;
unsigned long long int var_9 = 15601602791328354049ULL;
int zero = 0;
unsigned int var_10 = 1355076144U;
unsigned int var_11 = 2722443453U;
int var_12 = 1131906393;
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
