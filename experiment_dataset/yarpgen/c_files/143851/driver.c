#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10996189768814201381ULL;
int var_12 = 2093869671;
signed char var_15 = (signed char)77;
int zero = 0;
unsigned long long int var_20 = 8591000872190149658ULL;
short var_21 = (short)29139;
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
