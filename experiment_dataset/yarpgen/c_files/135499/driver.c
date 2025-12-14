#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)203;
short var_9 = (short)-30487;
unsigned short var_11 = (unsigned short)59521;
long long int var_17 = -7727334393186075240LL;
int zero = 0;
unsigned short var_20 = (unsigned short)47373;
unsigned short var_21 = (unsigned short)33408;
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
