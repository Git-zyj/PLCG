#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 803456696U;
int var_9 = 667840908;
unsigned short var_17 = (unsigned short)17691;
int zero = 0;
unsigned short var_19 = (unsigned short)57973;
unsigned char var_20 = (unsigned char)169;
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
