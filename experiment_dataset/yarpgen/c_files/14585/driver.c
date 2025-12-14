#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
unsigned long long int var_2 = 12322644600474056599ULL;
unsigned short var_7 = (unsigned short)46337;
unsigned short var_8 = (unsigned short)16200;
unsigned short var_10 = (unsigned short)6949;
int var_12 = -1772953535;
long long int var_13 = -1707531862966098193LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 153204851;
unsigned long long int var_18 = 18015673692168443614ULL;
_Bool var_19 = (_Bool)1;
int var_20 = -1752964281;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
