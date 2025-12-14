#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12108648384143151085ULL;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 18275258830205525644ULL;
unsigned char var_7 = (unsigned char)204;
unsigned long long int var_8 = 5390365799887916447ULL;
unsigned char var_11 = (unsigned char)145;
int var_13 = 719295262;
unsigned char var_15 = (unsigned char)157;
int zero = 0;
unsigned long long int var_16 = 9117480084492440299ULL;
unsigned short var_17 = (unsigned short)17059;
short var_18 = (short)788;
unsigned char var_19 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
