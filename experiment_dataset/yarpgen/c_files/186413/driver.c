#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8908188703210099654LL;
unsigned int var_4 = 3623877029U;
signed char var_8 = (signed char)127;
long long int var_9 = -9130416520641706159LL;
int zero = 0;
unsigned long long int var_15 = 10763539682561015675ULL;
unsigned short var_16 = (unsigned short)50008;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
