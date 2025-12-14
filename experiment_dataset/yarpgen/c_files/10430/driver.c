#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1400545469U;
unsigned int var_8 = 1248603954U;
int var_11 = 203248096;
int zero = 0;
unsigned long long int var_13 = 6843045836675155561ULL;
unsigned long long int var_14 = 12270667628073184336ULL;
unsigned int var_15 = 1637029265U;
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
