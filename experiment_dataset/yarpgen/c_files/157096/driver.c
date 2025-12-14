#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59039;
unsigned char var_4 = (unsigned char)155;
long long int var_5 = 2970802782441900951LL;
long long int var_14 = -6247131427598207822LL;
int zero = 0;
unsigned int var_18 = 596690250U;
unsigned int var_19 = 1171252528U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
