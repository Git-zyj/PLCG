#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3903100909U;
short var_2 = (short)20888;
int var_3 = 749733069;
unsigned short var_4 = (unsigned short)53868;
unsigned short var_7 = (unsigned short)9493;
short var_8 = (short)1026;
unsigned char var_9 = (unsigned char)155;
_Bool var_10 = (_Bool)0;
long long int var_11 = 1498020718742946768LL;
int zero = 0;
long long int var_12 = 1701793428174881878LL;
short var_13 = (short)25950;
long long int var_14 = -6824659443739284923LL;
unsigned short var_15 = (unsigned short)15799;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
