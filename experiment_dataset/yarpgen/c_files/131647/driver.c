#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)240;
long long int var_5 = 2907080200028282076LL;
unsigned char var_7 = (unsigned char)233;
_Bool var_9 = (_Bool)0;
short var_16 = (short)-199;
long long int var_18 = 2853123968570883029LL;
int zero = 0;
long long int var_19 = 1688080190364371107LL;
long long int var_20 = 6185839960192202716LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
