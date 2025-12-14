#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_8 = 3971133862U;
unsigned char var_12 = (unsigned char)123;
unsigned short var_17 = (unsigned short)37606;
unsigned char var_18 = (unsigned char)17;
int zero = 0;
int var_20 = 746992706;
unsigned int var_21 = 3035050742U;
unsigned long long int var_22 = 384864756559992386ULL;
void init() {
}

void checksum() {
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
