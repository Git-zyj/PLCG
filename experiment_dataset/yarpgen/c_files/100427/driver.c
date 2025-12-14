#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)108;
unsigned int var_5 = 2902579018U;
unsigned char var_6 = (unsigned char)79;
unsigned char var_12 = (unsigned char)21;
int zero = 0;
long long int var_13 = -7863368677493861026LL;
unsigned long long int var_14 = 18365286507671797247ULL;
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
