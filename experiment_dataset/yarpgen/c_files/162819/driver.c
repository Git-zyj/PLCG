#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2122295689;
unsigned char var_7 = (unsigned char)33;
_Bool var_9 = (_Bool)1;
long long int var_10 = 7724589357811737781LL;
signed char var_11 = (signed char)125;
int var_12 = -1859719270;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1155297297;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
