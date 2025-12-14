#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -7587326264830964403LL;
short var_12 = (short)-11243;
short var_19 = (short)-3540;
int zero = 0;
unsigned long long int var_20 = 6825497742576123180ULL;
int var_21 = 1612059861;
short var_22 = (short)2394;
unsigned int var_23 = 3219127263U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
