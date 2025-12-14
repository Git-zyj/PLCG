#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 1137350942;
_Bool var_3 = (_Bool)1;
long long int var_5 = -4880702795922351045LL;
long long int var_6 = 1945538420457598137LL;
long long int var_14 = 7925713120389540262LL;
int zero = 0;
unsigned int var_18 = 1979161449U;
unsigned int var_19 = 1970259690U;
unsigned char var_20 = (unsigned char)123;
long long int var_21 = -3656712373227765670LL;
unsigned short var_22 = (unsigned short)5597;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
