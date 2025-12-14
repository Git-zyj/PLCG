#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7302032632028729550LL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)38914;
unsigned int var_7 = 4155594217U;
int zero = 0;
unsigned short var_10 = (unsigned short)3199;
unsigned long long int var_11 = 6790838312199362938ULL;
unsigned int var_12 = 3352253281U;
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
