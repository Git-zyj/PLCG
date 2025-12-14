#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8604;
unsigned int var_1 = 668661892U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3320994804U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)54402;
int zero = 0;
short var_10 = (short)-21560;
unsigned short var_11 = (unsigned short)6753;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
