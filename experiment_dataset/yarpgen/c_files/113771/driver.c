#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
short var_4 = (short)-25945;
unsigned long long int var_9 = 9683362481132111159ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)8368;
short var_14 = (short)21689;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10757996072349320322ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
