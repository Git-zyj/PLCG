#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)184;
long long int var_5 = -2101685582105414910LL;
signed char var_6 = (signed char)1;
unsigned int var_7 = 2054188890U;
unsigned short var_11 = (unsigned short)64301;
unsigned long long int var_14 = 10608060732672514457ULL;
unsigned long long int var_15 = 4383613417225092662ULL;
unsigned short var_18 = (unsigned short)10988;
int zero = 0;
unsigned short var_20 = (unsigned short)2523;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
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
