#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 135864371U;
long long int var_3 = 3460305331811911589LL;
unsigned short var_6 = (unsigned short)52176;
_Bool var_9 = (_Bool)1;
long long int var_10 = -3268056187680972777LL;
int zero = 0;
unsigned int var_11 = 1904005796U;
long long int var_12 = 5730936429581311254LL;
unsigned short var_13 = (unsigned short)9520;
signed char var_14 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
