#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3449665002U;
signed char var_3 = (signed char)1;
unsigned int var_6 = 2771390986U;
unsigned long long int var_9 = 10043569480491852253ULL;
signed char var_10 = (signed char)-50;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)100;
void init() {
}

void checksum() {
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
