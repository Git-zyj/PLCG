#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14179;
long long int var_3 = 5764415161214119289LL;
int var_5 = -829642242;
short var_7 = (short)2466;
long long int var_9 = 2837508449985874973LL;
unsigned char var_11 = (unsigned char)158;
int zero = 0;
unsigned short var_13 = (unsigned short)9228;
unsigned char var_14 = (unsigned char)68;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 15707300094662451873ULL;
short var_17 = (short)-12171;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
