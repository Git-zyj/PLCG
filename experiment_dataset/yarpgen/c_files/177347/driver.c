#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12095;
unsigned char var_4 = (unsigned char)218;
unsigned short var_5 = (unsigned short)18420;
long long int var_6 = 950541035213387184LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_13 = 1673010908749283766ULL;
long long int var_16 = 5455482709053325808LL;
int var_17 = 819652608;
int zero = 0;
unsigned int var_19 = 4217440063U;
unsigned char var_20 = (unsigned char)0;
long long int var_21 = -6293750856644648827LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 17908919403478236316ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
