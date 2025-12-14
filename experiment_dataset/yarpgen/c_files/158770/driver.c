#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18218072770167461499ULL;
long long int var_4 = -920912535702716019LL;
short var_7 = (short)-10207;
signed char var_16 = (signed char)51;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7153333472764375461LL;
unsigned short var_21 = (unsigned short)24810;
unsigned short var_22 = (unsigned short)1355;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
