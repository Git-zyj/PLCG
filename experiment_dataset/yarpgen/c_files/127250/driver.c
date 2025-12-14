#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1347794106U;
unsigned int var_3 = 38225180U;
int var_5 = -661865496;
signed char var_9 = (signed char)-84;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 389088045U;
int zero = 0;
long long int var_14 = -8972914884268715564LL;
unsigned char var_15 = (unsigned char)197;
int var_16 = -1042290903;
unsigned short var_17 = (unsigned short)27617;
unsigned int var_18 = 2112121891U;
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
