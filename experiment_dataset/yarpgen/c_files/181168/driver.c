#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13040707195338513992ULL;
unsigned short var_4 = (unsigned short)26266;
long long int var_6 = 4557874861837334915LL;
long long int var_8 = 2115498385147273553LL;
unsigned int var_11 = 1556851775U;
signed char var_12 = (signed char)-1;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1380724801U;
unsigned long long int var_16 = 6913287160776178091ULL;
unsigned long long int var_17 = 3776178809733366148ULL;
signed char var_18 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
