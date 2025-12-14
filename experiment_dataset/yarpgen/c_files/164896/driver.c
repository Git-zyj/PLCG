#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -349600973;
unsigned int var_3 = 3614410947U;
_Bool var_12 = (_Bool)1;
long long int var_14 = 7987500365683732774LL;
unsigned char var_16 = (unsigned char)224;
int zero = 0;
int var_20 = -294047843;
unsigned int var_21 = 1539847400U;
int var_22 = 258083901;
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
