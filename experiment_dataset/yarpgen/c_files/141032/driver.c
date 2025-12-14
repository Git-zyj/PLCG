#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = -3303257638043000963LL;
unsigned long long int var_5 = 8441752167128893258ULL;
signed char var_7 = (signed char)103;
unsigned char var_8 = (unsigned char)109;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)68;
_Bool var_17 = (_Bool)0;
long long int var_18 = 9117709484392265653LL;
int zero = 0;
unsigned short var_20 = (unsigned short)7751;
unsigned short var_21 = (unsigned short)29183;
long long int var_22 = -2247060911796284602LL;
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
