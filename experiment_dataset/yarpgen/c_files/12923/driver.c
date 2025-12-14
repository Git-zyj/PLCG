#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)0;
unsigned int var_5 = 2861003648U;
long long int var_6 = -5476060314904167874LL;
unsigned long long int var_12 = 12664294471165757775ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)156;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1236799940117511135LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
