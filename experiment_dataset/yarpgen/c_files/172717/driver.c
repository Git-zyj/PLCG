#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_5 = (short)1908;
unsigned long long int var_8 = 15531591340112925708ULL;
unsigned short var_10 = (unsigned short)22167;
unsigned short var_13 = (unsigned short)52124;
short var_15 = (short)-13325;
short var_17 = (short)3955;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-8;
int var_21 = 982814895;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
