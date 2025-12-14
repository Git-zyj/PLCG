#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9077;
unsigned char var_1 = (unsigned char)254;
unsigned int var_2 = 2832685488U;
short var_3 = (short)14225;
unsigned int var_4 = 1714925259U;
unsigned long long int var_5 = 10903224752825536589ULL;
unsigned char var_6 = (unsigned char)47;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-14788;
int var_9 = 1657304425;
unsigned char var_10 = (unsigned char)19;
short var_11 = (short)-31698;
signed char var_13 = (signed char)104;
signed char var_14 = (signed char)-33;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 16016519036722593804ULL;
unsigned int var_17 = 4047587884U;
unsigned short var_18 = (unsigned short)35785;
unsigned long long int var_19 = 7101335071647574604ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
