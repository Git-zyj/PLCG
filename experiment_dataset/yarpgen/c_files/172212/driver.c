#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 933190342;
unsigned short var_2 = (unsigned short)4191;
int var_6 = 302233943;
int zero = 0;
unsigned short var_13 = (unsigned short)17671;
unsigned char var_14 = (unsigned char)255;
long long int var_15 = -8940711955216546674LL;
long long int var_16 = -7762867952118527387LL;
_Bool var_17 = (_Bool)1;
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
