#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1882378391;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 1478767577207392113ULL;
signed char var_7 = (signed char)14;
signed char var_10 = (signed char)-38;
int zero = 0;
unsigned long long int var_12 = 16665496026242360553ULL;
int var_13 = 1020358416;
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
