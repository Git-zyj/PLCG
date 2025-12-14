#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19058;
unsigned int var_2 = 2686433396U;
_Bool var_4 = (_Bool)1;
int var_5 = -705933742;
int zero = 0;
unsigned int var_20 = 8833453U;
short var_21 = (short)13937;
void init() {
}

void checksum() {
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
