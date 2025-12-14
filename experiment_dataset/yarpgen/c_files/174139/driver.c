#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13346912637556847585ULL;
unsigned short var_5 = (unsigned short)52058;
int var_8 = 1709599075;
short var_12 = (short)21514;
long long int var_14 = 8406705516621563962LL;
unsigned long long int var_18 = 3019390308467174681ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)64062;
unsigned int var_20 = 2660937935U;
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
