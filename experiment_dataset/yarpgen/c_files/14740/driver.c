#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
signed char var_5 = (signed char)-81;
unsigned int var_8 = 1395125059U;
signed char var_9 = (signed char)64;
int zero = 0;
unsigned long long int var_12 = 15700788532693892020ULL;
unsigned long long int var_13 = 2999352800701506474ULL;
long long int var_14 = -7112641207996368668LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
