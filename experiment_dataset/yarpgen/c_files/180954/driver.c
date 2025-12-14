#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3497277512834462775LL;
unsigned char var_1 = (unsigned char)99;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 1862673143U;
long long int var_6 = 2232932309960075690LL;
int var_7 = 2122014631;
int zero = 0;
unsigned short var_11 = (unsigned short)9720;
unsigned short var_12 = (unsigned short)1326;
int var_13 = -1619212176;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
