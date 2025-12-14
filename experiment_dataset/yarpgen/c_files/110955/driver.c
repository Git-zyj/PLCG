#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4702251695181239103LL;
unsigned long long int var_4 = 6971484364439452461ULL;
unsigned char var_5 = (unsigned char)204;
unsigned long long int var_8 = 11786436360934294544ULL;
unsigned int var_13 = 3138426715U;
int zero = 0;
unsigned int var_15 = 4086621737U;
long long int var_16 = 89318852439946465LL;
unsigned short var_17 = (unsigned short)24040;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
