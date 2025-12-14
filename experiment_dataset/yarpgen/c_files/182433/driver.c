#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3305188065562796137ULL;
short var_3 = (short)20874;
signed char var_9 = (signed char)80;
int zero = 0;
long long int var_10 = -4970121740328039021LL;
unsigned int var_11 = 1071464350U;
short var_12 = (short)-13764;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
