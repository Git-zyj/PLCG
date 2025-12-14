#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-55;
unsigned long long int var_4 = 10129201133869693690ULL;
signed char var_9 = (signed char)125;
int zero = 0;
unsigned int var_12 = 227178120U;
unsigned int var_13 = 4210490625U;
int var_14 = 1808458346;
unsigned int var_15 = 530397235U;
unsigned int var_16 = 3552521485U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
