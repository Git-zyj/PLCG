#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16521507954775010201ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 3186343126782481156ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)28419;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)29682;
unsigned short var_12 = (unsigned short)32659;
unsigned int var_13 = 91257952U;
long long int var_14 = 993516924277026200LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
