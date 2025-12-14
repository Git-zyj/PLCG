#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = 8822900650320199045LL;
unsigned char var_8 = (unsigned char)243;
unsigned long long int var_13 = 16174549251931366077ULL;
unsigned short var_14 = (unsigned short)14849;
unsigned int var_15 = 1169828920U;
int zero = 0;
long long int var_16 = 5333358317957380103LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
