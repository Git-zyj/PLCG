#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4574981810286416088ULL;
long long int var_2 = 8034799439507862480LL;
int var_3 = 926399921;
unsigned long long int var_5 = 16771207423080456877ULL;
int var_10 = -2135323474;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 223823857U;
unsigned long long int var_14 = 12227278507185799250ULL;
unsigned short var_15 = (unsigned short)42288;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
