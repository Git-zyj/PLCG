#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)-17326;
unsigned short var_4 = (unsigned short)34780;
unsigned short var_6 = (unsigned short)33481;
int var_7 = -479752222;
long long int var_9 = -2708787754581695322LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 2769453767725513382ULL;
long long int var_14 = 3893398226000148943LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = 4515538670851137643LL;
int zero = 0;
unsigned char var_17 = (unsigned char)35;
unsigned short var_18 = (unsigned short)37407;
unsigned short var_19 = (unsigned short)10486;
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
