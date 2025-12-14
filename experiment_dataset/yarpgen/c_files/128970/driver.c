#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -836094069;
int var_5 = -1787259696;
long long int var_6 = -4000503732380929090LL;
int var_9 = 1419880816;
_Bool var_11 = (_Bool)0;
int var_18 = 619880363;
int zero = 0;
unsigned short var_20 = (unsigned short)60659;
unsigned short var_21 = (unsigned short)5810;
int var_22 = 1320347191;
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
