#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1842179460;
int var_10 = 137164599;
unsigned char var_13 = (unsigned char)157;
int zero = 0;
unsigned char var_19 = (unsigned char)244;
long long int var_20 = 4393670016019149236LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
