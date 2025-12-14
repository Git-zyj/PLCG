#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 997371128U;
unsigned short var_4 = (unsigned short)62799;
int var_7 = 1733521630;
unsigned int var_10 = 4265739228U;
unsigned int var_11 = 2167925937U;
int zero = 0;
unsigned int var_12 = 2084010798U;
unsigned short var_13 = (unsigned short)33289;
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
