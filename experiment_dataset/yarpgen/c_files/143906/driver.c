#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2122895235498655063LL;
unsigned short var_1 = (unsigned short)48769;
long long int var_3 = 8894405186454509259LL;
unsigned char var_5 = (unsigned char)76;
signed char var_6 = (signed char)40;
long long int var_7 = -4809416704072148984LL;
unsigned short var_8 = (unsigned short)25820;
unsigned char var_16 = (unsigned char)158;
long long int var_19 = -1546142442888113779LL;
int zero = 0;
long long int var_20 = 7176910087687574343LL;
long long int var_21 = 3998593148396752301LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
