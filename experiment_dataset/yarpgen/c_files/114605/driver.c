#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11441469891719238669ULL;
short var_5 = (short)-19483;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 1979653746587367886ULL;
unsigned long long int var_13 = 14796865740759202489ULL;
unsigned long long int var_16 = 9521726515352572214ULL;
signed char var_18 = (signed char)33;
int zero = 0;
unsigned char var_20 = (unsigned char)61;
int var_21 = 2020869992;
unsigned long long int var_22 = 17055313337892713826ULL;
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
