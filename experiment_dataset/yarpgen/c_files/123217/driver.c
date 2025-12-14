#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
short var_6 = (short)-30773;
long long int var_7 = 5420052219872165162LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 9103578519509468489LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = 9068798343810398516LL;
unsigned long long int var_18 = 2492669046364272432ULL;
unsigned int var_19 = 470287063U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
