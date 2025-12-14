#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)13910;
unsigned short var_8 = (unsigned short)21675;
unsigned long long int var_10 = 12143240275141577096ULL;
unsigned short var_11 = (unsigned short)16740;
unsigned char var_13 = (unsigned char)221;
short var_16 = (short)-5563;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 15097142825247151548ULL;
unsigned long long int var_20 = 15689151877342159334ULL;
unsigned long long int var_21 = 9162196437494088463ULL;
signed char var_22 = (signed char)104;
long long int var_23 = -8589606702478716478LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
