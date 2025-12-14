#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1837129955366013017LL;
unsigned short var_2 = (unsigned short)42326;
short var_4 = (short)-25901;
_Bool var_5 = (_Bool)1;
long long int var_6 = -8164469147485576155LL;
short var_7 = (short)-19251;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)31;
int var_10 = 1171511721;
int zero = 0;
unsigned short var_16 = (unsigned short)29238;
short var_17 = (short)-25153;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)24368;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
