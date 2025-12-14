#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1019830735;
_Bool var_1 = (_Bool)0;
long long int var_3 = -6645167002139006032LL;
unsigned int var_4 = 2014176307U;
unsigned char var_5 = (unsigned char)127;
int var_8 = -275724787;
short var_9 = (short)18037;
int zero = 0;
long long int var_11 = 673736148202736896LL;
_Bool var_12 = (_Bool)0;
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
