#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 324643236;
long long int var_1 = -2238742521023095418LL;
long long int var_2 = -807457117779972053LL;
short var_7 = (short)-14007;
int var_9 = 1578807474;
int zero = 0;
int var_12 = 238959161;
unsigned char var_13 = (unsigned char)127;
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
