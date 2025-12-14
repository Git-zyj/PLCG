#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1239796763;
long long int var_2 = 874469570266765352LL;
unsigned short var_3 = (unsigned short)48357;
int var_4 = 1083525934;
unsigned char var_6 = (unsigned char)176;
unsigned char var_7 = (unsigned char)176;
unsigned short var_10 = (unsigned short)24816;
unsigned long long int var_12 = 4049642745506044019ULL;
int zero = 0;
long long int var_13 = -8655283436887008071LL;
unsigned short var_14 = (unsigned short)60563;
unsigned short var_15 = (unsigned short)17436;
unsigned char var_16 = (unsigned char)22;
long long int var_17 = -761089430122952086LL;
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
