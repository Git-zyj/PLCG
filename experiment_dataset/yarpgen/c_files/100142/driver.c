#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17813;
unsigned int var_6 = 2784098079U;
_Bool var_10 = (_Bool)1;
unsigned char var_15 = (unsigned char)225;
int zero = 0;
unsigned int var_20 = 3725452587U;
long long int var_21 = -1309306829647180373LL;
unsigned char var_22 = (unsigned char)120;
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
