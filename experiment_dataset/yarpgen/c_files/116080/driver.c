#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36001;
unsigned int var_3 = 4213027956U;
unsigned int var_6 = 1737745662U;
unsigned long long int var_9 = 11624871146032175231ULL;
unsigned int var_10 = 372630028U;
unsigned int var_12 = 1561126570U;
int zero = 0;
int var_13 = 1701430338;
long long int var_14 = -7076075854827615850LL;
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
