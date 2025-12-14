#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31969;
long long int var_1 = 3062708630159863673LL;
short var_9 = (short)27822;
int zero = 0;
unsigned long long int var_16 = 5581714531503033445ULL;
unsigned int var_17 = 2005894217U;
void init() {
}

void checksum() {
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
