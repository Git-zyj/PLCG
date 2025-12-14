#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8138510358878976214LL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)222;
unsigned short var_4 = (unsigned short)15477;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 9179189849328709331ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)247;
int var_11 = 1604272747;
unsigned char var_12 = (unsigned char)78;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
