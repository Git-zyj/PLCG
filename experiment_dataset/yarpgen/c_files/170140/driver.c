#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1807945699;
unsigned short var_1 = (unsigned short)56105;
_Bool var_2 = (_Bool)1;
int var_3 = -605016119;
int var_4 = 460280812;
long long int var_5 = -1037353767011638578LL;
long long int var_6 = -2934761380617659921LL;
short var_7 = (short)6252;
unsigned long long int var_9 = 3030961050572554784ULL;
short var_10 = (short)9143;
int var_11 = 1376603861;
int zero = 0;
unsigned long long int var_12 = 8934345071846204657ULL;
unsigned long long int var_13 = 6706145891801044059ULL;
unsigned short var_14 = (unsigned short)21773;
unsigned int var_15 = 2811983876U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
