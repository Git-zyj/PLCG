#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4051837559U;
unsigned int var_2 = 721296017U;
unsigned char var_3 = (unsigned char)86;
unsigned long long int var_4 = 6063725466463068216ULL;
long long int var_5 = -2836630860869586873LL;
long long int var_8 = 9120914013446521239LL;
int var_9 = 641934613;
unsigned char var_10 = (unsigned char)224;
signed char var_14 = (signed char)87;
signed char var_15 = (signed char)89;
unsigned short var_16 = (unsigned short)51237;
int zero = 0;
unsigned short var_17 = (unsigned short)1531;
int var_18 = 405429898;
unsigned long long int var_19 = 7350243069080223621ULL;
unsigned long long int var_20 = 9679203771733821039ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
