#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 791321481U;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
int var_5 = -1814084041;
unsigned short var_6 = (unsigned short)12222;
unsigned char var_7 = (unsigned char)96;
unsigned char var_8 = (unsigned char)164;
unsigned short var_9 = (unsigned short)10721;
int zero = 0;
unsigned long long int var_10 = 15459521076418678446ULL;
short var_11 = (short)32634;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
