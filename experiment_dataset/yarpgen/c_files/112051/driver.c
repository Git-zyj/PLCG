#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)172;
int var_2 = -190336408;
unsigned char var_3 = (unsigned char)168;
unsigned char var_4 = (unsigned char)249;
long long int var_5 = 6081309918128817214LL;
unsigned char var_6 = (unsigned char)16;
long long int var_7 = 5648642301069321695LL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)74;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
