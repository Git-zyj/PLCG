#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3944288499760103701LL;
short var_7 = (short)-31753;
unsigned short var_9 = (unsigned short)28598;
int zero = 0;
signed char var_20 = (signed char)-57;
unsigned int var_21 = 1583225084U;
unsigned int var_22 = 3086024390U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
