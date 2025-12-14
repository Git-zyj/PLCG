#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12815;
short var_2 = (short)8023;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)8738;
int var_8 = 352735857;
long long int var_9 = 2333679409079954534LL;
unsigned int var_11 = 1166543555U;
int zero = 0;
unsigned short var_13 = (unsigned short)63755;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 15925458601201822ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
