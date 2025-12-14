#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3925427436438764324LL;
unsigned int var_4 = 1232976036U;
long long int var_5 = -4386322668458411644LL;
unsigned short var_6 = (unsigned short)1885;
unsigned int var_8 = 3209702439U;
short var_10 = (short)19696;
unsigned int var_11 = 3485366042U;
int zero = 0;
unsigned int var_12 = 208390104U;
_Bool var_13 = (_Bool)1;
long long int var_14 = -3719782877110652427LL;
unsigned int var_15 = 1654766164U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
