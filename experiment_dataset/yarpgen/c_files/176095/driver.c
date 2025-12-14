#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
short var_1 = (short)-14314;
unsigned long long int var_6 = 16970995419127620596ULL;
unsigned int var_8 = 2614108555U;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)59;
short var_12 = (short)27715;
unsigned short var_13 = (unsigned short)48429;
unsigned short var_14 = (unsigned short)35402;
long long int var_15 = -7367004849468176243LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
