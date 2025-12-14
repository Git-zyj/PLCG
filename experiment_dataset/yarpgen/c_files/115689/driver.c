#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23495;
unsigned long long int var_3 = 11382237305072525955ULL;
unsigned int var_4 = 1830790956U;
short var_5 = (short)4034;
long long int var_8 = 7314087733714147806LL;
int zero = 0;
int var_11 = 1443595528;
int var_12 = 1400544586;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
