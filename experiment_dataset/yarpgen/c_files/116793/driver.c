#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4519685106143169022LL;
long long int var_2 = -7511123614622295788LL;
short var_4 = (short)28821;
_Bool var_6 = (_Bool)1;
long long int var_7 = -3837872992626019341LL;
short var_8 = (short)3860;
unsigned long long int var_9 = 5496024853345432549ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)187;
unsigned int var_11 = 496596484U;
unsigned long long int var_12 = 6551435288324392308ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
