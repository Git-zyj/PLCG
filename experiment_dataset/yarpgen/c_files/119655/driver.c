#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8715370048997021628LL;
unsigned long long int var_1 = 15198745644516714851ULL;
unsigned int var_2 = 3728639343U;
long long int var_5 = -3716531716440977774LL;
long long int var_10 = -4066557504790779002LL;
unsigned long long int var_14 = 10474299267115808986ULL;
signed char var_15 = (signed char)45;
long long int var_16 = 2953069387370951991LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)62617;
unsigned long long int var_19 = 5624162339772762858ULL;
unsigned short var_20 = (unsigned short)894;
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
