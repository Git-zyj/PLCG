#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
unsigned int var_1 = 2353964131U;
int var_2 = 702016697;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
long long int var_5 = 7952801640092952377LL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)230;
unsigned char var_8 = (unsigned char)59;
int var_9 = -2046298177;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)127;
int var_12 = -1378026677;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)188;
unsigned char var_15 = (unsigned char)176;
long long int var_16 = 5669616971361163513LL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
long long int var_19 = 5230337969073595975LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 4038186296U;
long long int var_22 = 3043892991568232886LL;
unsigned char var_23 = (unsigned char)45;
_Bool var_24 = (_Bool)1;
long long int var_25 = -7536199963044072736LL;
signed char var_26 = (signed char)25;
int var_27 = 525446267;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 787055949U;
int var_30 = -664824011;
unsigned int var_31 = 1186708172U;
unsigned char var_32 = (unsigned char)12;
int var_33 = -1631325785;
int var_34 = -1426801090;
long long int var_35 = -6489262026932782493LL;
long long int var_36 = -3831494065319820850LL;
unsigned int var_37 = 1824389918U;
int var_38 = 155068820;
_Bool var_39 = (_Bool)1;
int var_40 = 1075266245;
long long int var_41 = 3890921465912488150LL;
long long int var_42 = -4996081842210062633LL;
void init() {
}

void checksum() {
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
