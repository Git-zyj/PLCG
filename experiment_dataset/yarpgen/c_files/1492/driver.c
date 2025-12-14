#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5552574743881017129LL;
int var_1 = -1901983549;
long long int var_3 = -419518002855113470LL;
unsigned long long int var_8 = 9422385001478040993ULL;
unsigned int var_9 = 4268688010U;
int zero = 0;
int var_10 = 1387213761;
unsigned char var_11 = (unsigned char)253;
signed char var_12 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
