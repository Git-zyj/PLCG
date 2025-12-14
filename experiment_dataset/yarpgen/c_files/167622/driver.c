#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1376706119U;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)245;
unsigned long long int var_6 = 15108481758859526950ULL;
unsigned short var_8 = (unsigned short)14300;
unsigned char var_9 = (unsigned char)142;
short var_10 = (short)-6429;
short var_11 = (short)17239;
unsigned char var_12 = (unsigned char)250;
unsigned int var_13 = 1019196181U;
long long int var_14 = 4281381232132041313LL;
int zero = 0;
unsigned char var_15 = (unsigned char)228;
unsigned char var_16 = (unsigned char)5;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
