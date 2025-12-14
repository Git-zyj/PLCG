#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3802474386508933856ULL;
unsigned long long int var_7 = 2348996234683314435ULL;
signed char var_10 = (signed char)-105;
unsigned long long int var_12 = 8086692240041096258ULL;
int zero = 0;
unsigned long long int var_13 = 14459956764487909551ULL;
unsigned long long int var_14 = 5465277304508040888ULL;
unsigned long long int var_15 = 5335161740440134250ULL;
unsigned long long int var_16 = 3108429339215434405ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
