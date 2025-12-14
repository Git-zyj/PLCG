#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1547769728;
_Bool var_5 = (_Bool)0;
int var_6 = 591318317;
signed char var_8 = (signed char)-18;
unsigned short var_10 = (unsigned short)5987;
_Bool var_11 = (_Bool)1;
long long int var_13 = 514355175809112983LL;
int zero = 0;
long long int var_16 = 1476469227807461418LL;
int var_17 = -469996605;
void init() {
}

void checksum() {
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
