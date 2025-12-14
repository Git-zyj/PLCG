#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1014931288;
long long int var_3 = -482566511362180959LL;
signed char var_6 = (signed char)20;
long long int var_8 = -7974119701378170245LL;
unsigned short var_9 = (unsigned short)8744;
unsigned short var_10 = (unsigned short)1676;
short var_11 = (short)23805;
int zero = 0;
long long int var_14 = 6320911826753439877LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
