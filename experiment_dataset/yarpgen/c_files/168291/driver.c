#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3283222898623345315LL;
unsigned char var_16 = (unsigned char)3;
unsigned char var_18 = (unsigned char)142;
int zero = 0;
unsigned char var_19 = (unsigned char)74;
unsigned char var_20 = (unsigned char)35;
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
