#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)235;
int var_4 = -383280996;
short var_5 = (short)16457;
unsigned short var_6 = (unsigned short)50036;
int var_7 = -867624767;
unsigned char var_10 = (unsigned char)195;
unsigned long long int var_13 = 13117513824134752551ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_17 = (unsigned short)32267;
int zero = 0;
short var_18 = (short)13597;
int var_19 = -1749390914;
unsigned long long int var_20 = 2738454300961584526ULL;
unsigned char var_21 = (unsigned char)184;
void init() {
}

void checksum() {
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
