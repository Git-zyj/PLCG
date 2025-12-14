#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6384241239734704454LL;
unsigned char var_3 = (unsigned char)89;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)28610;
unsigned short var_6 = (unsigned short)27501;
short var_7 = (short)5343;
int var_8 = 1858215471;
signed char var_9 = (signed char)97;
int var_10 = 1173293853;
signed char var_11 = (signed char)123;
short var_13 = (short)-31377;
int var_14 = -675110025;
short var_16 = (short)-17732;
int zero = 0;
short var_17 = (short)8163;
signed char var_18 = (signed char)27;
unsigned short var_19 = (unsigned short)50152;
unsigned char var_20 = (unsigned char)44;
signed char var_21 = (signed char)-23;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)130;
long long int var_24 = -2899592501174492415LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
