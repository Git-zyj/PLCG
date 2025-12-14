#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1189;
short var_2 = (short)31150;
unsigned char var_3 = (unsigned char)54;
long long int var_4 = -8798840131243679288LL;
int var_5 = 1159665375;
signed char var_7 = (signed char)78;
unsigned long long int var_11 = 4458633972092143059ULL;
short var_14 = (short)-5791;
unsigned char var_15 = (unsigned char)150;
long long int var_16 = 5061390685241593737LL;
int zero = 0;
unsigned char var_17 = (unsigned char)146;
unsigned short var_18 = (unsigned short)32545;
unsigned char var_19 = (unsigned char)14;
void init() {
}

void checksum() {
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
