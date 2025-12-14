#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16945047417488252690ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 12270036584992074944ULL;
int var_7 = -2059270845;
unsigned int var_9 = 1038786208U;
int var_14 = -697137083;
unsigned long long int var_16 = 5927534732910279022ULL;
short var_17 = (short)-12711;
int zero = 0;
unsigned long long int var_19 = 17333401252232366449ULL;
unsigned long long int var_20 = 8477701287461426107ULL;
short var_21 = (short)-18718;
int var_22 = -66852163;
unsigned char var_23 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
