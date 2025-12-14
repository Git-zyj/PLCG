#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1919658988U;
unsigned int var_1 = 1907441463U;
short var_2 = (short)-24795;
short var_3 = (short)-26486;
short var_5 = (short)-9971;
long long int var_6 = -3800638176024997855LL;
long long int var_7 = -5905004126022955565LL;
long long int var_11 = -6639062090494911274LL;
unsigned long long int var_14 = 999345786208474798ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)122;
unsigned int var_19 = 3219283867U;
long long int var_20 = -6480789244975630339LL;
void init() {
}

void checksum() {
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
