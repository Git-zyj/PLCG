#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-98;
signed char var_13 = (signed char)-2;
int var_14 = 680798303;
int zero = 0;
unsigned short var_15 = (unsigned short)54957;
unsigned int var_16 = 1562695718U;
long long int var_17 = 6607943328474151027LL;
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
