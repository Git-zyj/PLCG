#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 975929201;
long long int var_7 = -6168403072014422065LL;
signed char var_16 = (signed char)-38;
int zero = 0;
signed char var_18 = (signed char)51;
unsigned int var_19 = 901047251U;
unsigned int var_20 = 1442217890U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
