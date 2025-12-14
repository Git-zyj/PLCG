#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3829153903U;
unsigned long long int var_5 = 2552192112548369216ULL;
unsigned long long int var_6 = 9633633208050001296ULL;
short var_8 = (short)18455;
unsigned long long int var_10 = 16505918134682164736ULL;
unsigned long long int var_12 = 5195226140870348669ULL;
unsigned int var_13 = 1834900156U;
int zero = 0;
unsigned int var_17 = 1161501993U;
unsigned long long int var_18 = 15547255811991430229ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
