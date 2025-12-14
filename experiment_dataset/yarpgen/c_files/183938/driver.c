#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1179262500;
unsigned int var_1 = 2131077655U;
unsigned long long int var_3 = 7173344805859169249ULL;
long long int var_4 = -3184163124959667396LL;
short var_8 = (short)-27308;
int var_10 = 1394061526;
signed char var_14 = (signed char)-7;
int zero = 0;
signed char var_16 = (signed char)-114;
signed char var_17 = (signed char)97;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-12488;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
