#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1015434448;
int var_1 = 1842511914;
long long int var_2 = 820842668273626938LL;
unsigned short var_7 = (unsigned short)4401;
unsigned char var_8 = (unsigned char)70;
int var_9 = -244062618;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)14626;
unsigned short var_13 = (unsigned short)21428;
unsigned long long int var_14 = 12374765716810047354ULL;
unsigned long long int var_16 = 5948388259995267846ULL;
int zero = 0;
short var_18 = (short)-25969;
short var_19 = (short)26775;
int var_20 = -1130475963;
unsigned short var_21 = (unsigned short)82;
short var_22 = (short)4726;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
