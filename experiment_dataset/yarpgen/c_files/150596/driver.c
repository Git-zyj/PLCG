#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8147155362178484983LL;
unsigned short var_1 = (unsigned short)44595;
unsigned int var_2 = 3543340745U;
short var_3 = (short)-26693;
unsigned long long int var_4 = 151164235482193961ULL;
int var_5 = 894110786;
unsigned long long int var_6 = 4099035592546135687ULL;
unsigned short var_9 = (unsigned short)28423;
unsigned char var_10 = (unsigned char)46;
signed char var_11 = (signed char)15;
unsigned long long int var_12 = 3297252716016685345ULL;
int var_13 = 2107496241;
unsigned char var_14 = (unsigned char)220;
unsigned long long int var_15 = 7910209358448311882ULL;
int zero = 0;
long long int var_17 = 6566678672941338302LL;
short var_18 = (short)-30633;
long long int var_19 = -5581342860977813326LL;
void init() {
}

void checksum() {
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
