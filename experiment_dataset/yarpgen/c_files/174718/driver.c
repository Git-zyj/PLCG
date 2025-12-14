#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17503673515613448137ULL;
signed char var_2 = (signed char)100;
unsigned long long int var_6 = 18070859690283837619ULL;
int zero = 0;
unsigned int var_12 = 2093061165U;
unsigned char var_13 = (unsigned char)27;
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
