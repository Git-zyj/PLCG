#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10290;
unsigned int var_2 = 681253795U;
unsigned int var_4 = 2149170373U;
int var_5 = -339275402;
int var_7 = 2024891863;
unsigned int var_9 = 2286763983U;
short var_10 = (short)14084;
unsigned char var_13 = (unsigned char)241;
unsigned int var_15 = 2192380003U;
int zero = 0;
short var_16 = (short)-20385;
_Bool var_17 = (_Bool)0;
long long int var_18 = -8255096724823649062LL;
int var_19 = 1710984358;
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
