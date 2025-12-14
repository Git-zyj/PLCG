#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10072741456720942214ULL;
int var_7 = 1588541565;
signed char var_11 = (signed char)11;
unsigned int var_13 = 2689347672U;
signed char var_18 = (signed char)3;
int zero = 0;
unsigned int var_19 = 785224252U;
signed char var_20 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
