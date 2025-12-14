#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1528557139;
unsigned long long int var_2 = 17785888184082122382ULL;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)2;
_Bool var_9 = (_Bool)0;
long long int var_11 = -3182957384322543212LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)23068;
unsigned long long int var_16 = 8452519372519779638ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
