#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1247751503U;
signed char var_7 = (signed char)1;
long long int var_9 = 5071589388328335320LL;
long long int var_11 = 4758954877325028620LL;
int zero = 0;
signed char var_17 = (signed char)-119;
unsigned char var_18 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
