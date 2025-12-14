#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1675605263;
unsigned int var_6 = 1874137500U;
unsigned short var_9 = (unsigned short)27362;
int zero = 0;
int var_19 = -801539937;
short var_20 = (short)18379;
long long int var_21 = 3642657969072557063LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
