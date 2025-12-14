#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2835;
unsigned int var_8 = 905204294U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)50253;
unsigned long long int var_18 = 10140692749050380695ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
