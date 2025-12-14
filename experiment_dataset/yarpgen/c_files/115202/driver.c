#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58695;
signed char var_4 = (signed char)-109;
int var_5 = 1958088420;
signed char var_7 = (signed char)77;
long long int var_9 = 864623470591440505LL;
int zero = 0;
long long int var_13 = 4267651018962846099LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-30121;
int var_16 = 650814315;
unsigned short var_17 = (unsigned short)55610;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
