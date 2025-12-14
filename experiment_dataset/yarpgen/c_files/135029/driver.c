#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2110762324U;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)239;
int var_3 = 1809455598;
int var_4 = 2080562238;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)78;
unsigned char var_8 = (unsigned char)111;
int var_10 = -1413720095;
long long int var_11 = 508100100605592174LL;
int var_13 = 1490181701;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)142;
unsigned long long int var_16 = 130268701971153200ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
