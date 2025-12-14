#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7205152218357559202LL;
unsigned short var_1 = (unsigned short)26192;
int var_2 = -224301006;
unsigned short var_3 = (unsigned short)7232;
long long int var_4 = -2934884010834061607LL;
int var_5 = -709074771;
int var_6 = -1763116026;
short var_7 = (short)-1537;
long long int var_8 = -6083298176407281450LL;
int var_10 = -852737885;
int zero = 0;
int var_11 = -1751523485;
int var_12 = -349311028;
short var_13 = (short)2008;
long long int var_14 = -4015154730598507541LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
