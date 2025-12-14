#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5391334287066324897LL;
long long int var_7 = 2401744563191004666LL;
long long int var_8 = 2579508972971125992LL;
long long int var_9 = 8678343952256925567LL;
int zero = 0;
int var_10 = -678146770;
int var_11 = -834994989;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
