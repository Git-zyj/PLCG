#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
signed char var_2 = (signed char)-45;
int var_3 = 859192988;
long long int var_6 = -5792482374911736332LL;
long long int var_7 = 4035888740799144898LL;
unsigned char var_8 = (unsigned char)116;
unsigned char var_9 = (unsigned char)3;
unsigned char var_11 = (unsigned char)84;
long long int var_13 = -8403899550341803922LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 6823171973601577544LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
