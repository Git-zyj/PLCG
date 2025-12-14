#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5143313555714090032LL;
unsigned int var_5 = 2464091720U;
unsigned char var_9 = (unsigned char)11;
long long int var_10 = 4564507319757593529LL;
int zero = 0;
short var_13 = (short)-32381;
unsigned short var_14 = (unsigned short)57047;
long long int var_15 = -3089853492946972446LL;
unsigned char var_16 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
