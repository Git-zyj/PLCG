#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
int var_2 = 1364806380;
unsigned int var_6 = 1010894753U;
long long int var_7 = -220031397336579632LL;
unsigned char var_9 = (unsigned char)250;
int zero = 0;
short var_14 = (short)-31648;
short var_15 = (short)-31371;
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
