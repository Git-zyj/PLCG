#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -787401299;
signed char var_4 = (signed char)59;
int var_5 = 1342784480;
short var_6 = (short)-2202;
long long int var_7 = 419247679093093830LL;
unsigned long long int var_9 = 15382108819217554606ULL;
unsigned long long int var_10 = 4831531991812741208ULL;
signed char var_11 = (signed char)-68;
unsigned char var_12 = (unsigned char)174;
_Bool var_14 = (_Bool)1;
short var_17 = (short)11502;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3153321633U;
long long int var_22 = -2691850211777029744LL;
unsigned char var_23 = (unsigned char)12;
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
