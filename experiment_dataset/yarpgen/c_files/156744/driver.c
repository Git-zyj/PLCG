#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29948;
short var_7 = (short)2773;
short var_8 = (short)11699;
long long int var_11 = 8336488343344041952LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 3416904429642898870ULL;
unsigned short var_14 = (unsigned short)45093;
int zero = 0;
signed char var_17 = (signed char)-14;
unsigned char var_18 = (unsigned char)235;
signed char var_19 = (signed char)16;
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
