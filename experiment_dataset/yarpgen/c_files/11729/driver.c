#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7899255257153846642ULL;
unsigned char var_1 = (unsigned char)116;
unsigned char var_3 = (unsigned char)204;
int var_4 = -487613301;
unsigned char var_7 = (unsigned char)32;
int var_10 = -1829946331;
_Bool var_12 = (_Bool)0;
long long int var_13 = -6079963855580748908LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-20688;
long long int var_16 = -1176967250740137513LL;
unsigned int var_17 = 3011351482U;
unsigned int var_18 = 2850379639U;
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
