#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2660030290624711974LL;
long long int var_9 = -541602931333628567LL;
int var_12 = -1666639560;
signed char var_16 = (signed char)-19;
signed char var_17 = (signed char)15;
long long int var_19 = -4124706177250377448LL;
int zero = 0;
signed char var_20 = (signed char)87;
long long int var_21 = 7317892101511935331LL;
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
