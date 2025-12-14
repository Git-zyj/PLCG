#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2137312241U;
unsigned int var_2 = 1076363180U;
unsigned short var_4 = (unsigned short)13472;
int var_6 = -1998032514;
unsigned short var_8 = (unsigned short)42203;
unsigned long long int var_9 = 12282623308708454523ULL;
signed char var_10 = (signed char)29;
int zero = 0;
int var_14 = -2066785088;
unsigned int var_15 = 3355928265U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
