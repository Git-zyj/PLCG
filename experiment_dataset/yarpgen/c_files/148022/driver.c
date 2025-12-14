#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12310;
short var_2 = (short)19360;
unsigned char var_3 = (unsigned char)198;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 981783359154189588ULL;
int zero = 0;
unsigned int var_13 = 3778047993U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 19243995U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
