#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 84240765U;
signed char var_4 = (signed char)99;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)70;
unsigned char var_11 = (unsigned char)233;
long long int var_12 = -3727623989913256027LL;
unsigned long long int var_14 = 10514281719818156085ULL;
signed char var_16 = (signed char)-70;
unsigned short var_18 = (unsigned short)41263;
int zero = 0;
int var_19 = 1096116470;
signed char var_20 = (signed char)-75;
unsigned long long int var_21 = 2430890320506696606ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
