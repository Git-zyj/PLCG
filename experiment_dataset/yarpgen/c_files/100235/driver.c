#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)17813;
unsigned long long int var_5 = 1948790104696853343ULL;
unsigned long long int var_11 = 17820421618830466680ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)115;
unsigned long long int var_21 = 13503444361123414138ULL;
unsigned int var_22 = 3569654867U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
