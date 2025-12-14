#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 793948313U;
unsigned int var_2 = 1793369862U;
unsigned int var_8 = 2549203250U;
unsigned long long int var_10 = 7864381094467511386ULL;
int zero = 0;
signed char var_13 = (signed char)-22;
unsigned char var_14 = (unsigned char)250;
int var_15 = 447915955;
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
