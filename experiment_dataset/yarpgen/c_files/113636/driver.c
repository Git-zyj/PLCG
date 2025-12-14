#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17951202971321189572ULL;
unsigned long long int var_4 = 12827892886253674688ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)43563;
long long int var_15 = 1349998327566654742LL;
unsigned int var_16 = 528167425U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
