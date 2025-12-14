#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1209138846U;
short var_2 = (short)16879;
unsigned char var_3 = (unsigned char)39;
unsigned long long int var_4 = 16541175289611676799ULL;
unsigned short var_6 = (unsigned short)8798;
unsigned long long int var_7 = 13801343342363498140ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 1264906173;
int var_11 = -2070778421;
unsigned int var_12 = 3656059560U;
unsigned char var_14 = (unsigned char)196;
short var_15 = (short)-20758;
int zero = 0;
int var_18 = -1828067346;
unsigned long long int var_19 = 12704172016850152920ULL;
unsigned long long int var_20 = 1362996466033962246ULL;
unsigned short var_21 = (unsigned short)58471;
int var_22 = 828134830;
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
