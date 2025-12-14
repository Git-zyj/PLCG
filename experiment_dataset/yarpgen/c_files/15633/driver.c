#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
unsigned short var_1 = (unsigned short)32190;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 816798758U;
unsigned long long int var_6 = 8212732643167240534ULL;
unsigned long long int var_8 = 2770069881081096487ULL;
unsigned short var_9 = (unsigned short)9527;
int var_10 = -277262592;
unsigned short var_11 = (unsigned short)22276;
int zero = 0;
unsigned long long int var_13 = 12725270622100758826ULL;
unsigned long long int var_14 = 14295781403181880308ULL;
int var_15 = -349067034;
int var_16 = 1060478609;
unsigned long long int var_17 = 15133921463982331768ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
