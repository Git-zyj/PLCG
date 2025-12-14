#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-70;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)78;
int var_7 = -428383831;
unsigned short var_8 = (unsigned short)2679;
unsigned long long int var_10 = 3389829047339278633ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)26;
unsigned char var_17 = (unsigned char)189;
signed char var_18 = (signed char)17;
int zero = 0;
long long int var_20 = 8834147134408092578LL;
unsigned long long int var_21 = 8571509213372412857ULL;
short var_22 = (short)29589;
long long int var_23 = 5449043063940871368LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
