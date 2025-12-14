#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9372;
int var_3 = -1490486851;
short var_4 = (short)30107;
unsigned long long int var_5 = 2331178788508975941ULL;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-26779;
unsigned short var_13 = (unsigned short)2945;
int zero = 0;
int var_16 = 140934522;
unsigned char var_17 = (unsigned char)60;
unsigned int var_18 = 2923227762U;
unsigned short var_19 = (unsigned short)38247;
short var_20 = (short)-15015;
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
