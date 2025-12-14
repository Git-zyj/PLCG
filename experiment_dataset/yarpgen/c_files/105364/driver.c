#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-1330;
unsigned short var_3 = (unsigned short)11655;
long long int var_4 = -1833520199182794949LL;
long long int var_5 = 7300146679879718938LL;
unsigned int var_6 = 3909174468U;
unsigned int var_11 = 4064616180U;
unsigned short var_12 = (unsigned short)50043;
unsigned short var_13 = (unsigned short)32616;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -7934652708660354615LL;
short var_16 = (short)-26260;
void init() {
}

void checksum() {
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
