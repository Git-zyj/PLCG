#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1052811483;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_9 = -5643092509391689312LL;
unsigned long long int var_11 = 6474997594176243732ULL;
short var_16 = (short)29728;
int zero = 0;
short var_17 = (short)8999;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
