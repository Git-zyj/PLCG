#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2887869759U;
unsigned int var_3 = 2458897035U;
long long int var_9 = 599135818429034113LL;
unsigned char var_10 = (unsigned char)71;
int zero = 0;
unsigned int var_11 = 3913786595U;
unsigned int var_12 = 1509226764U;
unsigned int var_13 = 3180335620U;
unsigned char var_14 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
