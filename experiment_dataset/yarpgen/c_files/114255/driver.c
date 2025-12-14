#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)114;
unsigned int var_10 = 3057089130U;
unsigned short var_11 = (unsigned short)45151;
unsigned short var_15 = (unsigned short)31538;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3446515130U;
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
