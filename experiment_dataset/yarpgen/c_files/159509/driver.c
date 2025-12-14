#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1826209706;
signed char var_2 = (signed char)-33;
signed char var_7 = (signed char)-91;
unsigned char var_9 = (unsigned char)87;
unsigned long long int var_11 = 7288653879455322668ULL;
int var_12 = 602260191;
int zero = 0;
int var_13 = 604657371;
unsigned long long int var_14 = 18394124704512081658ULL;
unsigned char var_15 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
