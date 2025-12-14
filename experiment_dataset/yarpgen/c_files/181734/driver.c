#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)45;
unsigned int var_5 = 406312853U;
unsigned char var_7 = (unsigned char)44;
short var_9 = (short)14517;
int zero = 0;
int var_11 = -647943115;
unsigned char var_12 = (unsigned char)45;
long long int var_13 = 1052772737672943552LL;
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
