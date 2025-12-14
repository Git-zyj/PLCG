#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12579264915005212068ULL;
_Bool var_5 = (_Bool)0;
short var_11 = (short)16617;
long long int var_16 = 8180989739722957295LL;
int zero = 0;
unsigned char var_18 = (unsigned char)109;
signed char var_19 = (signed char)112;
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
