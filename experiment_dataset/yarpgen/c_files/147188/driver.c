#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34231;
unsigned long long int var_1 = 16574281552108406848ULL;
int var_2 = 1090574105;
unsigned long long int var_4 = 13266408077592321509ULL;
unsigned long long int var_6 = 4170250973253959296ULL;
int var_9 = 1711246745;
signed char var_10 = (signed char)-38;
int var_11 = 1887785060;
unsigned long long int var_14 = 481334900756909535ULL;
unsigned long long int var_15 = 13515850031879022576ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-13549;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8648507751695683186ULL;
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
