#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31751;
signed char var_5 = (signed char)-35;
long long int var_9 = -70805225421485897LL;
int zero = 0;
unsigned long long int var_12 = 14040972478505252904ULL;
unsigned int var_13 = 937917299U;
void init() {
}

void checksum() {
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
