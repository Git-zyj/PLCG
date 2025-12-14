#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3682998454U;
unsigned int var_3 = 1337200625U;
unsigned int var_6 = 198250496U;
unsigned int var_10 = 2298037143U;
unsigned int var_14 = 4059899615U;
unsigned int var_16 = 973069579U;
int zero = 0;
unsigned int var_17 = 3484530739U;
unsigned int var_18 = 187001368U;
unsigned int var_19 = 1217276854U;
void init() {
}

void checksum() {
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
