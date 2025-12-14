#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50711;
int var_2 = -2020793141;
int var_3 = 1188791076;
unsigned short var_4 = (unsigned short)62649;
unsigned long long int var_5 = 9856431707732495471ULL;
int var_6 = 1629713056;
unsigned short var_8 = (unsigned short)61008;
unsigned int var_11 = 3674837253U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 9979389462291225601ULL;
int zero = 0;
short var_14 = (short)-10623;
long long int var_15 = -1438544628125927036LL;
unsigned long long int var_16 = 17156150021285644821ULL;
long long int var_17 = 5131151131887448213LL;
_Bool var_18 = (_Bool)0;
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
