#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10277166820029883708ULL;
short var_7 = (short)18224;
unsigned short var_10 = (unsigned short)10376;
long long int var_12 = 2809686438531830597LL;
int zero = 0;
unsigned long long int var_14 = 11628604371087293307ULL;
long long int var_15 = 6146953922224912800LL;
unsigned char var_16 = (unsigned char)183;
int var_17 = 2121919591;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
