#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23042;
long long int var_2 = -7433569783615199436LL;
unsigned long long int var_3 = 6338121622740050408ULL;
unsigned short var_4 = (unsigned short)60483;
unsigned int var_8 = 1211123395U;
unsigned short var_10 = (unsigned short)9842;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = 7711959514627623667LL;
unsigned short var_13 = (unsigned short)17343;
unsigned char var_14 = (unsigned char)186;
unsigned int var_15 = 2213681576U;
unsigned long long int var_16 = 11106533291084350716ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
