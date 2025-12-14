#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
long long int var_3 = 7656667787453872990LL;
unsigned long long int var_4 = 10550534645868442369ULL;
_Bool var_5 = (_Bool)0;
int var_6 = -1780641785;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)1;
short var_16 = (short)22116;
int zero = 0;
short var_17 = (short)22959;
signed char var_18 = (signed char)-90;
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
