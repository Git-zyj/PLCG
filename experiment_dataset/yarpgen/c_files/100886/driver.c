#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
signed char var_3 = (signed char)68;
unsigned int var_12 = 1241813452U;
unsigned int var_13 = 1290958498U;
unsigned short var_15 = (unsigned short)12109;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2851934352U;
unsigned int var_18 = 2376426509U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
