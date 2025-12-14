#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = -1182969055;
long long int var_13 = -668308376090781364LL;
unsigned long long int var_14 = 7499169327048944394ULL;
int zero = 0;
unsigned int var_15 = 1242449578U;
unsigned int var_16 = 2633799315U;
unsigned char var_17 = (unsigned char)244;
unsigned long long int var_18 = 12969158078689779347ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
