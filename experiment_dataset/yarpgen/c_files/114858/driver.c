#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3564;
short var_1 = (short)-17446;
signed char var_2 = (signed char)53;
unsigned long long int var_3 = 16873874458845713726ULL;
short var_4 = (short)15693;
signed char var_5 = (signed char)115;
short var_6 = (short)30962;
signed char var_9 = (signed char)-9;
int var_11 = -439557721;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2689321237119494385LL;
short var_16 = (short)29379;
int zero = 0;
int var_17 = -1649694159;
unsigned short var_18 = (unsigned short)9410;
long long int var_19 = 7774012186006225026LL;
unsigned long long int var_20 = 2456054814590066775ULL;
_Bool var_21 = (_Bool)1;
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
