#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10718559573878096114ULL;
unsigned int var_1 = 971797760U;
signed char var_2 = (signed char)82;
unsigned char var_3 = (unsigned char)129;
unsigned int var_4 = 1187228534U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)47781;
unsigned int var_9 = 1169053497U;
unsigned long long int var_10 = 16384257822182864477ULL;
int zero = 0;
signed char var_11 = (signed char)92;
unsigned long long int var_12 = 9747500681284026183ULL;
unsigned int var_13 = 2829869999U;
unsigned long long int var_14 = 5811435503692050755ULL;
unsigned long long int var_15 = 16208533479346415930ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
