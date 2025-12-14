#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)59;
signed char var_2 = (signed char)-32;
unsigned long long int var_5 = 1352018911908087001ULL;
long long int var_8 = -6613234160008803597LL;
unsigned short var_10 = (unsigned short)46658;
int zero = 0;
short var_18 = (short)-2724;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
