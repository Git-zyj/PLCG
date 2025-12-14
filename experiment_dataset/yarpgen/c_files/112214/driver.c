#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2733761469U;
unsigned int var_12 = 2920173596U;
unsigned int var_13 = 2564462975U;
unsigned int var_14 = 2746856616U;
signed char var_15 = (signed char)-33;
int zero = 0;
unsigned int var_18 = 3543899090U;
short var_19 = (short)14552;
unsigned int var_20 = 3131049954U;
long long int var_21 = 2886482516773757084LL;
long long int var_22 = 4820120372428488154LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
