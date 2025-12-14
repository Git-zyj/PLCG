#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4699132648445344703LL;
unsigned long long int var_6 = 5387011757236348961ULL;
signed char var_7 = (signed char)(-127 - 1);
int zero = 0;
signed char var_15 = (signed char)9;
long long int var_16 = 8528063974927727062LL;
unsigned int var_17 = 1006109288U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
