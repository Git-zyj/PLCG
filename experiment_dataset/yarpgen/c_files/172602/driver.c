#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-43;
short var_2 = (short)-30974;
int var_4 = -62299923;
unsigned long long int var_8 = 2863270498263777963ULL;
unsigned long long int var_11 = 14612905755682244177ULL;
long long int var_14 = 2728223146917549987LL;
unsigned long long int var_16 = 12053120798538634456ULL;
int zero = 0;
int var_17 = -716223287;
long long int var_18 = 2731398778804145567LL;
short var_19 = (short)-7346;
long long int var_20 = 4085278658726829689LL;
short var_21 = (short)9463;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
