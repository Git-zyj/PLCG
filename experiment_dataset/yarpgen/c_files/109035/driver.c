#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1671808188;
long long int var_1 = 6277566052748395480LL;
_Bool var_2 = (_Bool)1;
int var_4 = -1079304569;
int var_5 = -1243948125;
int var_6 = 1607602887;
unsigned short var_8 = (unsigned short)59965;
int var_9 = 820264954;
int var_10 = 314326134;
int var_11 = 2141881357;
unsigned char var_12 = (unsigned char)113;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)52;
int zero = 0;
int var_16 = -2021243994;
long long int var_17 = 5803197482816071750LL;
unsigned short var_18 = (unsigned short)32280;
int var_19 = -492512271;
int var_20 = -1400055109;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
