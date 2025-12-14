#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5440385762858778309LL;
long long int var_3 = 6118880889522742847LL;
unsigned long long int var_5 = 6926623375800703017ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)65075;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)54969;
short var_13 = (short)32003;
unsigned char var_14 = (unsigned char)232;
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
