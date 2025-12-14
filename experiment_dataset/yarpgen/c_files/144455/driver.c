#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8601;
int var_1 = 458235683;
unsigned char var_2 = (unsigned char)241;
short var_9 = (short)-3356;
unsigned int var_13 = 1321403569U;
int zero = 0;
short var_15 = (short)13601;
long long int var_16 = 4644954106174902628LL;
long long int var_17 = 4584194400365503532LL;
signed char var_18 = (signed char)-123;
signed char var_19 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
