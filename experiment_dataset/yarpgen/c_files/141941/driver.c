#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1574159731U;
unsigned int var_2 = 3347799849U;
unsigned long long int var_3 = 16406844266996615142ULL;
unsigned long long int var_5 = 2230569242568813267ULL;
short var_7 = (short)-9571;
unsigned short var_10 = (unsigned short)8509;
signed char var_12 = (signed char)5;
unsigned char var_17 = (unsigned char)161;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 3236468138U;
unsigned long long int var_20 = 13389858949682168520ULL;
unsigned long long int var_21 = 14239390816721628491ULL;
unsigned long long int var_22 = 4908259029354638016ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
