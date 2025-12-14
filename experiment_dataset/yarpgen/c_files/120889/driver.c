#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 322557742501180032ULL;
unsigned long long int var_1 = 10223400599365921196ULL;
unsigned long long int var_9 = 9256082660835158214ULL;
unsigned long long int var_12 = 8387321663600391613ULL;
short var_13 = (short)-28508;
int zero = 0;
unsigned int var_15 = 1382171690U;
signed char var_16 = (signed char)98;
void init() {
}

void checksum() {
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
