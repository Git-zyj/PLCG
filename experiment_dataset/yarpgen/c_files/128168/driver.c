#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12838361825162553845ULL;
long long int var_5 = -2731146003348427596LL;
unsigned long long int var_8 = 3872275538176882851ULL;
unsigned char var_11 = (unsigned char)33;
long long int var_13 = 66364825930329423LL;
unsigned int var_17 = 3475330463U;
int zero = 0;
unsigned long long int var_20 = 10227259872816042797ULL;
long long int var_21 = 2155650294862715503LL;
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
