#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23468;
unsigned char var_6 = (unsigned char)218;
unsigned char var_9 = (unsigned char)225;
int zero = 0;
long long int var_14 = -93005647256602516LL;
unsigned char var_15 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
