#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1152326554;
int var_6 = 1713398496;
signed char var_8 = (signed char)-37;
int var_9 = -1800091461;
int zero = 0;
int var_11 = 1990647195;
long long int var_12 = 2675669475296155191LL;
void init() {
}

void checksum() {
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
