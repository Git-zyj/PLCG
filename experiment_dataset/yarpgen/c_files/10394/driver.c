#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = -1650899633;
signed char var_4 = (signed char)-18;
long long int var_5 = 3924809448713410114LL;
unsigned char var_7 = (unsigned char)178;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)51372;
unsigned int var_13 = 2900554044U;
int zero = 0;
signed char var_14 = (signed char)-45;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
