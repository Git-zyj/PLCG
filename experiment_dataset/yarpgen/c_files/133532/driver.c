#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-109;
signed char var_11 = (signed char)-39;
signed char var_14 = (signed char)-10;
int zero = 0;
signed char var_15 = (signed char)-28;
unsigned int var_16 = 3623298241U;
signed char var_17 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
