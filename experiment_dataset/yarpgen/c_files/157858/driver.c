#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1658;
int var_1 = -1216068614;
int var_4 = 171528615;
unsigned long long int var_6 = 13887219829683867368ULL;
long long int var_9 = 1567779873905579041LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 221710947U;
unsigned short var_14 = (unsigned short)38022;
int var_15 = 2027419144;
int zero = 0;
unsigned short var_16 = (unsigned short)54749;
int var_17 = -272816077;
int var_18 = 1391020703;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
