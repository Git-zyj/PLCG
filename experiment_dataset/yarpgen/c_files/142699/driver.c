#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18115280940789779584ULL;
unsigned long long int var_1 = 2635419114965692164ULL;
short var_3 = (short)-12087;
int var_4 = 1169929882;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14151061301246087639ULL;
unsigned int var_12 = 3848188845U;
short var_13 = (short)3940;
short var_15 = (short)-3590;
int zero = 0;
unsigned long long int var_16 = 8092769404982508101ULL;
unsigned short var_17 = (unsigned short)29540;
int var_18 = -842821592;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 219807386536456869ULL;
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
