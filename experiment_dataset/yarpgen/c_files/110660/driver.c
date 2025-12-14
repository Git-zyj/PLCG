#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)158;
unsigned long long int var_7 = 16179905713011409501ULL;
unsigned char var_8 = (unsigned char)193;
signed char var_9 = (signed char)-75;
int zero = 0;
unsigned int var_10 = 3043565876U;
unsigned short var_11 = (unsigned short)35993;
unsigned long long int var_12 = 230902253410067087ULL;
signed char var_13 = (signed char)110;
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
