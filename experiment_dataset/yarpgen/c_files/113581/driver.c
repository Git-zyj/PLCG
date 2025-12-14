#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7684;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)220;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 3333951220U;
long long int var_14 = -3177061496471162960LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)7136;
short var_17 = (short)31385;
void init() {
}

void checksum() {
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
