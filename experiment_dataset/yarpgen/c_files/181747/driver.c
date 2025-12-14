#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1144882604U;
signed char var_3 = (signed char)103;
unsigned long long int var_6 = 7163653287076928890ULL;
unsigned long long int var_9 = 804973525522607062ULL;
unsigned long long int var_10 = 12294838546341567612ULL;
unsigned short var_11 = (unsigned short)12054;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2345799761U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)15153;
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
