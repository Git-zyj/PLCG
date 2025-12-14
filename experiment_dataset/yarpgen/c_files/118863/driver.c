#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5487253959325144047LL;
int var_2 = -395786217;
unsigned int var_6 = 3258459750U;
int zero = 0;
signed char var_19 = (signed char)119;
unsigned long long int var_20 = 13781783197761313920ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
