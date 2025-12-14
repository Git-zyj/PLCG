#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2100851482;
unsigned long long int var_1 = 17278964896905950817ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)15;
long long int var_12 = -4279454329006645785LL;
int zero = 0;
int var_13 = 1446896865;
unsigned char var_14 = (unsigned char)6;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2488683225U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
