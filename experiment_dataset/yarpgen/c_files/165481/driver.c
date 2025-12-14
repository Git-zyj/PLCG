#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2823462557763675685LL;
int var_2 = 861555549;
unsigned int var_3 = 254007762U;
unsigned long long int var_5 = 6368694314816459331ULL;
long long int var_7 = -5724215932996318885LL;
long long int var_9 = 2537058556136503524LL;
signed char var_11 = (signed char)117;
unsigned long long int var_15 = 3095085025677688832ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)166;
unsigned short var_18 = (unsigned short)45868;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
