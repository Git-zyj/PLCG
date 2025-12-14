#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2683002019U;
unsigned char var_1 = (unsigned char)132;
short var_3 = (short)6777;
unsigned short var_4 = (unsigned short)9861;
int var_5 = 1144763852;
unsigned long long int var_6 = 13603790499494465382ULL;
unsigned short var_10 = (unsigned short)7910;
_Bool var_13 = (_Bool)1;
long long int var_14 = -2816850449997297826LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -3034254783682656232LL;
long long int var_18 = -5790839768699102072LL;
unsigned long long int var_19 = 741084353033932768ULL;
unsigned short var_20 = (unsigned short)53669;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
