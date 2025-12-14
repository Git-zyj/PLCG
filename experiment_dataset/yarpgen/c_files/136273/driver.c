#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1116992285U;
unsigned char var_4 = (unsigned char)126;
unsigned char var_5 = (unsigned char)252;
unsigned int var_6 = 2422448817U;
unsigned short var_8 = (unsigned short)20056;
unsigned char var_11 = (unsigned char)0;
long long int var_12 = -3165865961272942628LL;
unsigned int var_14 = 1850753169U;
int var_16 = -1531490825;
long long int var_17 = -4576475834019936059LL;
int zero = 0;
unsigned long long int var_18 = 17107489597273371361ULL;
unsigned char var_19 = (unsigned char)230;
void init() {
}

void checksum() {
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
