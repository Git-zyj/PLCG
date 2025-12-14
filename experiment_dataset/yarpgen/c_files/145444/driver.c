#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
short var_2 = (short)-5655;
int var_3 = -507672355;
unsigned long long int var_4 = 7933770559109648669ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 11235765177919335292ULL;
unsigned short var_7 = (unsigned short)59294;
unsigned short var_9 = (unsigned short)11101;
short var_10 = (short)31964;
unsigned short var_11 = (unsigned short)52509;
unsigned short var_12 = (unsigned short)17245;
int zero = 0;
unsigned char var_14 = (unsigned char)54;
long long int var_15 = 6035286250199231325LL;
long long int var_16 = 3916538668346373214LL;
long long int var_17 = -3459962044176984580LL;
short var_18 = (short)-14022;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
