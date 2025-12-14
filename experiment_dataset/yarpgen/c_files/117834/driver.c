#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5608;
unsigned char var_3 = (unsigned char)116;
signed char var_4 = (signed char)-100;
unsigned char var_7 = (unsigned char)82;
signed char var_8 = (signed char)-59;
int zero = 0;
int var_10 = 106947829;
signed char var_11 = (signed char)-7;
int var_12 = 380919348;
long long int var_13 = 8662744221932358690LL;
signed char var_14 = (signed char)-44;
_Bool var_15 = (_Bool)0;
short var_16 = (short)8703;
signed char var_17 = (signed char)46;
unsigned char var_18 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
