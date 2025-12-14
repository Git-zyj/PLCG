#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)60881;
unsigned int var_5 = 1355234541U;
unsigned short var_7 = (unsigned short)1061;
unsigned char var_9 = (unsigned char)96;
int zero = 0;
unsigned short var_10 = (unsigned short)18149;
long long int var_11 = -7033789558941862907LL;
unsigned long long int var_12 = 15857652392267480593ULL;
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
