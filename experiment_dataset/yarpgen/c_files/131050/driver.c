#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1130163079U;
long long int var_2 = -2285632102944008259LL;
signed char var_4 = (signed char)-120;
long long int var_5 = 6538754872069237979LL;
signed char var_11 = (signed char)-23;
int zero = 0;
unsigned int var_12 = 3351371530U;
long long int var_13 = 3862452328195631259LL;
signed char var_14 = (signed char)51;
unsigned short var_15 = (unsigned short)33148;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
