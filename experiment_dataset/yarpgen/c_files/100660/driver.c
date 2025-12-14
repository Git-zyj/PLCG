#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1133273889U;
unsigned char var_1 = (unsigned char)238;
unsigned char var_5 = (unsigned char)249;
short var_7 = (short)-13599;
unsigned long long int var_10 = 17551409545859930870ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)7650;
int zero = 0;
unsigned short var_19 = (unsigned short)39061;
long long int var_20 = 4583814093045013262LL;
unsigned long long int var_21 = 13240942260075715606ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
