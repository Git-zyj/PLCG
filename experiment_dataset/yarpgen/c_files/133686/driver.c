#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1350377616;
short var_1 = (short)29828;
unsigned char var_2 = (unsigned char)177;
unsigned short var_6 = (unsigned short)26099;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)177;
long long int var_13 = 6858839112733449407LL;
signed char var_14 = (signed char)18;
signed char var_15 = (signed char)-80;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)53636;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)25520;
signed char var_21 = (signed char)-43;
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
