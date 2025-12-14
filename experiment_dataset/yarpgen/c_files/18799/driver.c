#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -571474312;
int var_4 = -1773960060;
int var_5 = 1220006064;
unsigned int var_6 = 2295014832U;
_Bool var_9 = (_Bool)1;
long long int var_10 = 6355208433657394602LL;
unsigned long long int var_11 = 16106867211791420936ULL;
unsigned short var_12 = (unsigned short)54368;
signed char var_13 = (signed char)17;
_Bool var_17 = (_Bool)1;
int var_18 = -65607346;
int zero = 0;
unsigned char var_19 = (unsigned char)250;
long long int var_20 = -3314195134290817079LL;
unsigned char var_21 = (unsigned char)252;
unsigned int var_22 = 3220171416U;
unsigned int var_23 = 2630838875U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
