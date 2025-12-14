#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1661;
unsigned long long int var_4 = 700280350738912734ULL;
signed char var_5 = (signed char)-47;
unsigned long long int var_9 = 14819732283829683574ULL;
int zero = 0;
signed char var_11 = (signed char)21;
unsigned int var_12 = 3480328876U;
signed char var_13 = (signed char)120;
long long int var_14 = -711612692778883402LL;
unsigned long long int var_15 = 8277305212452635471ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
