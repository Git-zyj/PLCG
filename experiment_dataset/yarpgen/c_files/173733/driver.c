#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1996884932057945479LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_4 = (short)5739;
long long int var_5 = -4292105248886444478LL;
short var_6 = (short)-5904;
unsigned long long int var_8 = 5431982495885730264ULL;
unsigned char var_9 = (unsigned char)109;
long long int var_10 = -5239513537887154021LL;
short var_11 = (short)-32386;
unsigned short var_12 = (unsigned short)45801;
unsigned short var_13 = (unsigned short)14719;
signed char var_14 = (signed char)114;
long long int var_16 = 6960914120623080287LL;
int zero = 0;
unsigned long long int var_17 = 6718873468964339757ULL;
unsigned long long int var_18 = 190054090984244417ULL;
unsigned short var_19 = (unsigned short)25259;
unsigned int var_20 = 2743868189U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
