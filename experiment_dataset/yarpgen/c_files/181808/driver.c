#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2791733877U;
unsigned char var_6 = (unsigned char)243;
unsigned int var_8 = 3859983239U;
long long int var_9 = 1652907947879275691LL;
signed char var_10 = (signed char)-114;
unsigned int var_12 = 4283636454U;
unsigned int var_14 = 3031658660U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4739962452012578175ULL;
int zero = 0;
unsigned int var_17 = 4214588517U;
unsigned short var_18 = (unsigned short)17857;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
