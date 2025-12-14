#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1906840288901774182LL;
unsigned int var_1 = 3707653811U;
signed char var_6 = (signed char)-112;
long long int var_9 = -7254899501618897865LL;
unsigned int var_10 = 576828805U;
int zero = 0;
signed char var_12 = (signed char)-33;
long long int var_13 = -5912353167170100765LL;
signed char var_14 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
