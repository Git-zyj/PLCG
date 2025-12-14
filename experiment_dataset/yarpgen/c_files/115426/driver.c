#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1565286615042397744LL;
unsigned int var_6 = 910075447U;
long long int var_9 = 9070060485733652289LL;
unsigned char var_10 = (unsigned char)227;
int zero = 0;
unsigned short var_15 = (unsigned short)64259;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)122;
int var_18 = 801611567;
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
