#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-112;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_7 = 988644673;
unsigned short var_8 = (unsigned short)18335;
unsigned short var_10 = (unsigned short)6117;
unsigned short var_11 = (unsigned short)32361;
unsigned int var_12 = 2563620685U;
int zero = 0;
unsigned long long int var_13 = 2352111734383282106ULL;
unsigned short var_14 = (unsigned short)49908;
long long int var_15 = -4961721631207532159LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
