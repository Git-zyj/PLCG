#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5088695442438902754ULL;
unsigned char var_4 = (unsigned char)84;
unsigned int var_5 = 915079405U;
unsigned long long int var_6 = 18225729572288946239ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 11657802340301576101ULL;
unsigned short var_12 = (unsigned short)710;
long long int var_14 = 2118265927927284288LL;
unsigned char var_15 = (unsigned char)234;
long long int var_19 = 5460989137100011926LL;
int zero = 0;
long long int var_20 = 58195334302144465LL;
int var_21 = -1489904653;
int var_22 = 2084020495;
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
