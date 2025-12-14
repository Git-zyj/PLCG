#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 957414699U;
unsigned long long int var_5 = 12615645353957546237ULL;
unsigned long long int var_14 = 6537752869871022243ULL;
long long int var_17 = -6344746212084545913LL;
int zero = 0;
unsigned char var_18 = (unsigned char)54;
unsigned char var_19 = (unsigned char)252;
unsigned char var_20 = (unsigned char)17;
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
