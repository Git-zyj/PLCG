#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32494;
unsigned long long int var_3 = 1773463077798111118ULL;
short var_4 = (short)20318;
unsigned int var_5 = 1306392054U;
long long int var_6 = 2470575639788805513LL;
long long int var_9 = 4561077179758693922LL;
unsigned int var_10 = 2913074682U;
int zero = 0;
short var_11 = (short)11609;
long long int var_12 = -3675582076424911434LL;
unsigned int var_13 = 3468547262U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
