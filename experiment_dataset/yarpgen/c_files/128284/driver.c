#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6329;
short var_1 = (short)3403;
int var_2 = -1675681830;
unsigned long long int var_3 = 2369211568669412604ULL;
unsigned char var_4 = (unsigned char)132;
long long int var_6 = 8274593135341303515LL;
unsigned short var_7 = (unsigned short)5299;
int var_9 = -1008959142;
_Bool var_10 = (_Bool)1;
long long int var_11 = 1982303760518486788LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
