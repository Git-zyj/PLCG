#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-25169;
long long int var_2 = 1865920093136506956LL;
unsigned int var_3 = 3529531125U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1479196195U;
_Bool var_9 = (_Bool)1;
int var_10 = -477374616;
long long int var_16 = 7819478659290314450LL;
int zero = 0;
unsigned char var_19 = (unsigned char)235;
unsigned long long int var_20 = 4757843566352862849ULL;
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
