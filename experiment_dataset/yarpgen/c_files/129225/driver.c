#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1230699712446528729ULL;
short var_4 = (short)-23103;
long long int var_5 = -6590726534042951249LL;
unsigned long long int var_8 = 1241097914340736601ULL;
unsigned int var_9 = 1690243342U;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3178957277711487051LL;
unsigned long long int var_13 = 17161448572295769002ULL;
int var_14 = -104952471;
int zero = 0;
unsigned int var_18 = 1867275975U;
long long int var_19 = 2578569420986948868LL;
unsigned char var_20 = (unsigned char)185;
void init() {
}

void checksum() {
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
