#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2249259210U;
unsigned long long int var_2 = 18339367199721530333ULL;
unsigned long long int var_5 = 15188776680208633382ULL;
unsigned long long int var_6 = 1731866634461842256ULL;
unsigned long long int var_8 = 14092044575947483176ULL;
long long int var_15 = 5062455175275538788LL;
int zero = 0;
signed char var_16 = (signed char)83;
unsigned long long int var_17 = 17265732675919121167ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
