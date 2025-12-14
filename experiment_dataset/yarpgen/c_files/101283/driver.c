#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1447228090908963713ULL;
long long int var_9 = -360100986217040395LL;
long long int var_11 = 5736168950066622557LL;
int zero = 0;
short var_12 = (short)-29073;
long long int var_13 = -6166154138362849837LL;
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
