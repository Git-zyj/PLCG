#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1478543822U;
short var_8 = (short)19802;
int zero = 0;
unsigned long long int var_10 = 10222937770498090756ULL;
unsigned long long int var_11 = 1031386641571589069ULL;
unsigned long long int var_12 = 1602088730359500988ULL;
unsigned long long int var_13 = 1941869674953412220ULL;
unsigned char var_14 = (unsigned char)217;
unsigned int var_15 = 1464265140U;
unsigned short var_16 = (unsigned short)24945;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)57398;
unsigned short var_19 = (unsigned short)49957;
short var_20 = (short)-28279;
unsigned int var_21 = 1201816593U;
signed char var_22 = (signed char)-4;
long long int var_23 = 4579034780502131505LL;
int var_24 = 1071954562;
signed char var_25 = (signed char)92;
unsigned int var_26 = 3097421549U;
short var_27 = (short)755;
unsigned short var_28 = (unsigned short)37510;
unsigned short var_29 = (unsigned short)15051;
unsigned char var_30 = (unsigned char)178;
unsigned long long int var_31 = 17707767731438810097ULL;
unsigned short var_32 = (unsigned short)39445;
short var_33 = (short)-11420;
unsigned char var_34 = (unsigned char)97;
short var_35 = (short)-31375;
_Bool var_36 = (_Bool)0;
long long int var_37 = -3714939077344905219LL;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
