#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13772264052950591329ULL;
signed char var_12 = (signed char)-80;
long long int var_15 = -1860114887128591902LL;
int zero = 0;
unsigned long long int var_17 = 2225927951442065121ULL;
unsigned int var_18 = 1250148509U;
unsigned int var_19 = 2620988657U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
