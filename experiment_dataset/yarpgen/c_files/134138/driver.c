#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_5 = 246569697;
unsigned short var_6 = (unsigned short)14370;
unsigned short var_8 = (unsigned short)16789;
unsigned char var_9 = (unsigned char)135;
unsigned long long int var_10 = 14820151809827535885ULL;
short var_11 = (short)-1384;
int var_12 = -1007526055;
int zero = 0;
unsigned int var_13 = 4051901422U;
long long int var_14 = -8498733268828134080LL;
unsigned long long int var_15 = 4731814691701881445ULL;
unsigned int var_16 = 2077463395U;
_Bool var_17 = (_Bool)0;
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
