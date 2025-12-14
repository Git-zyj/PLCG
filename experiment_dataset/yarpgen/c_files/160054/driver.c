#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2454442795399787427LL;
short var_2 = (short)-23091;
int var_4 = 28930527;
unsigned long long int var_5 = 7626632925387324227ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)172;
int var_11 = -636884215;
int var_13 = 705041320;
int zero = 0;
int var_19 = -2118921552;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
