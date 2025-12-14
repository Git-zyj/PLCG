#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16298538332282297460ULL;
unsigned int var_3 = 1290487153U;
_Bool var_7 = (_Bool)0;
long long int var_8 = -8747111749026749342LL;
long long int var_13 = 1504754685673157628LL;
int var_14 = 13704366;
unsigned int var_16 = 238085608U;
int zero = 0;
short var_17 = (short)-32188;
long long int var_18 = 7918446734608026910LL;
unsigned char var_19 = (unsigned char)146;
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
