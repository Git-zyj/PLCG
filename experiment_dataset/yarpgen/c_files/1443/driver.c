#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12053;
long long int var_5 = -2502684339303964157LL;
unsigned long long int var_13 = 2912986584916675729ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)17155;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2875603432U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
