#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 119381180;
long long int var_5 = -4608871700728556701LL;
unsigned char var_8 = (unsigned char)39;
unsigned int var_13 = 841502640U;
unsigned short var_14 = (unsigned short)26999;
int zero = 0;
long long int var_15 = -1301464800245235889LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-370;
void init() {
}

void checksum() {
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
