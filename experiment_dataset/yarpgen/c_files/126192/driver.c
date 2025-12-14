#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
short var_2 = (short)-13520;
unsigned short var_4 = (unsigned short)42464;
unsigned int var_5 = 432247606U;
unsigned short var_6 = (unsigned short)38118;
int var_8 = 1116545462;
int var_9 = 1575526475;
short var_10 = (short)26223;
unsigned long long int var_11 = 13958398935035695295ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)30383;
int var_14 = -636600673;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
