#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1459047690;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)9249;
unsigned short var_6 = (unsigned short)37738;
unsigned char var_8 = (unsigned char)192;
long long int var_9 = -5039356471500746758LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)21414;
unsigned int var_12 = 751142914U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
