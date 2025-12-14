#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -202255533;
short var_3 = (short)-17843;
unsigned char var_4 = (unsigned char)139;
_Bool var_6 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)15;
short var_12 = (short)19036;
unsigned int var_13 = 2899958629U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
