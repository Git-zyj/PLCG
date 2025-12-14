#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5377624145515555176LL;
unsigned short var_3 = (unsigned short)59750;
int var_7 = 469749926;
long long int var_8 = -6709843595152949816LL;
long long int var_9 = 1365662793896395342LL;
unsigned char var_10 = (unsigned char)199;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_14 = -7983805334502449032LL;
long long int var_15 = -6164420864591724209LL;
int var_16 = -1786134307;
unsigned short var_17 = (unsigned short)63963;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
