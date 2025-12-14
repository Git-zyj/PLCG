#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3862167391921873118ULL;
long long int var_6 = -5050683973896835604LL;
int var_10 = 155703602;
long long int var_14 = 6679961420014905911LL;
long long int var_15 = 6272657038404250882LL;
long long int var_17 = -4270252276980973686LL;
int zero = 0;
unsigned char var_18 = (unsigned char)133;
unsigned short var_19 = (unsigned short)27505;
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
