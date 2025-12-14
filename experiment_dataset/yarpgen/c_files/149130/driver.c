#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 285629398602150843LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-10786;
unsigned char var_6 = (unsigned char)249;
unsigned short var_7 = (unsigned short)16551;
unsigned long long int var_10 = 3303633937345510882ULL;
unsigned int var_11 = 4043312338U;
unsigned char var_13 = (unsigned char)229;
unsigned short var_15 = (unsigned short)63507;
int zero = 0;
short var_19 = (short)-30394;
int var_20 = 145365101;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
