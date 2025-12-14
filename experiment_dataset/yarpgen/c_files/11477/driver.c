#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7301036616618036553LL;
unsigned char var_6 = (unsigned char)63;
long long int var_9 = 5441461945052487981LL;
unsigned short var_11 = (unsigned short)58012;
int zero = 0;
unsigned long long int var_14 = 5757242822071624559ULL;
short var_15 = (short)-30455;
short var_16 = (short)-497;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
