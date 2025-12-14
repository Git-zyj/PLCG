#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11651;
long long int var_3 = -9105059557153449293LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 6818632466768901953ULL;
int var_11 = 99355815;
unsigned short var_12 = (unsigned short)43025;
int zero = 0;
signed char var_13 = (signed char)125;
long long int var_14 = 7109248536339745565LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
