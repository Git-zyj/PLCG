#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5126048697416194454LL;
unsigned int var_6 = 592750225U;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int var_14 = 2007283343;
unsigned char var_15 = (unsigned char)142;
unsigned long long int var_16 = 6096322848733981716ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)101;
unsigned int var_19 = 3516473786U;
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
