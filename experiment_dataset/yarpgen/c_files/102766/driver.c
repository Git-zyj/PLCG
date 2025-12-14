#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6112;
long long int var_2 = 7768905280945093892LL;
unsigned int var_4 = 2916697927U;
unsigned int var_5 = 2102286253U;
int var_6 = 222856888;
short var_17 = (short)-18127;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)-25108;
unsigned char var_21 = (unsigned char)153;
unsigned int var_22 = 3375200290U;
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
