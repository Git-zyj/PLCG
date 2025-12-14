#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5229692479544147848LL;
unsigned int var_12 = 552032855U;
long long int var_13 = 5874662555581661780LL;
int zero = 0;
unsigned int var_19 = 2723051043U;
signed char var_20 = (signed char)14;
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
