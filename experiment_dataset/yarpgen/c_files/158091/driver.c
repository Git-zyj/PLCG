#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned long long int var_1 = 3038554773932838200ULL;
short var_2 = (short)20388;
unsigned short var_3 = (unsigned short)38852;
int var_4 = -315194138;
int var_5 = -1349195562;
unsigned char var_6 = (unsigned char)161;
unsigned int var_7 = 3567293337U;
int var_8 = 441028537;
int var_9 = 177082700;
unsigned char var_10 = (unsigned char)101;
int zero = 0;
signed char var_11 = (signed char)47;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)3;
int var_14 = 1662404674;
long long int var_15 = -6534029182397111502LL;
long long int var_16 = -8205113868895037907LL;
short var_17 = (short)27904;
unsigned char var_18 = (unsigned char)99;
unsigned char var_19 = (unsigned char)225;
long long int var_20 = 6659738087697684137LL;
long long int var_21 = -63093794410351004LL;
short var_22 = (short)28380;
long long int var_23 = -25422453619188800LL;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)30971;
unsigned char var_26 = (unsigned char)102;
unsigned int var_27 = 3174458233U;
unsigned long long int var_28 = 10803805139743443785ULL;
signed char var_29 = (signed char)105;
unsigned int var_30 = 1574943738U;
short var_31 = (short)18216;
_Bool var_32 = (_Bool)1;
unsigned short var_33 = (unsigned short)57151;
unsigned char var_34 = (unsigned char)179;
short var_35 = (short)15034;
unsigned short var_36 = (unsigned short)19619;
short var_37 = (short)15143;
unsigned long long int var_38 = 9589355749515553829ULL;
signed char var_39 = (signed char)(-127 - 1);
_Bool var_40 = (_Bool)0;
void init() {
}

void checksum() {
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
