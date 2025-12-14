#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16322648223841186979ULL;
unsigned long long int var_3 = 11349265847062748659ULL;
unsigned long long int var_4 = 1445724370679432493ULL;
unsigned long long int var_6 = 3854920749139515003ULL;
unsigned long long int var_7 = 6751301063815733891ULL;
unsigned long long int var_9 = 11087556681698905944ULL;
unsigned long long int var_11 = 1428911766089961019ULL;
unsigned long long int var_12 = 617049203322322984ULL;
unsigned long long int var_13 = 11843296005244173685ULL;
unsigned long long int var_14 = 17685947725306941038ULL;
unsigned long long int var_15 = 4143479466577991393ULL;
int zero = 0;
unsigned long long int var_17 = 4490293039021611735ULL;
unsigned long long int var_18 = 5242854785050893947ULL;
unsigned long long int var_19 = 7412972452928011881ULL;
unsigned long long int var_20 = 17281016425714115805ULL;
void init() {
}

void checksum() {
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
