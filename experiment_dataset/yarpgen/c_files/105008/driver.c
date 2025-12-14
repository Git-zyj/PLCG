#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2383567510995128205ULL;
unsigned char var_3 = (unsigned char)200;
_Bool var_5 = (_Bool)0;
long long int var_7 = 1636002865582153390LL;
unsigned int var_8 = 3841980344U;
unsigned int var_13 = 1141405048U;
int zero = 0;
short var_17 = (short)7664;
unsigned short var_18 = (unsigned short)63958;
unsigned int var_19 = 3251801270U;
int var_20 = 1074147075;
unsigned int var_21 = 719639019U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
