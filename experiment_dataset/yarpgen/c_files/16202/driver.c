#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
long long int var_6 = -3207980179026719080LL;
unsigned short var_7 = (unsigned short)13250;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)9412;
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
