#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)48;
unsigned long long int var_8 = 4871759531213776611ULL;
int var_9 = 491111990;
_Bool var_10 = (_Bool)1;
unsigned int var_15 = 3899885930U;
int zero = 0;
signed char var_20 = (signed char)-111;
int var_21 = 1692106846;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
