#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_16 = (short)13163;
int zero = 0;
short var_19 = (short)23702;
unsigned long long int var_20 = 7980157625415401239ULL;
unsigned long long int var_21 = 9807272071114331189ULL;
short var_22 = (short)13381;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
