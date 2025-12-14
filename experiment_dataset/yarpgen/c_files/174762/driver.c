#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
long long int var_1 = 5666232032396358601LL;
long long int var_3 = -1641222923700551056LL;
unsigned char var_5 = (unsigned char)60;
unsigned char var_6 = (unsigned char)152;
long long int var_8 = -194209086182446110LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)53;
long long int var_13 = -2360930348460125407LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 5299218154115951834LL;
long long int var_17 = 9174100361006087016LL;
long long int var_18 = -1819924496006927901LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)105;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
