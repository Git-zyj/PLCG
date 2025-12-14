#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2112432359;
signed char var_10 = (signed char)-85;
short var_11 = (short)-23304;
unsigned char var_17 = (unsigned char)180;
int zero = 0;
long long int var_20 = 3043147392990475547LL;
unsigned char var_21 = (unsigned char)28;
int var_22 = 880239956;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
