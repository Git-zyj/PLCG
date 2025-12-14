#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)38388;
int var_3 = 1763970888;
signed char var_4 = (signed char)111;
unsigned long long int var_8 = 4686131530135951352ULL;
unsigned char var_9 = (unsigned char)72;
_Bool var_10 = (_Bool)0;
int var_11 = -1736866341;
_Bool var_12 = (_Bool)1;
int var_13 = -1000787396;
long long int var_15 = 7355644672430932253LL;
unsigned long long int var_16 = 8091070885813653960ULL;
short var_18 = (short)18084;
int zero = 0;
unsigned short var_19 = (unsigned short)50999;
unsigned long long int var_20 = 2042900359158394415ULL;
int var_21 = 813285238;
signed char var_22 = (signed char)-101;
signed char var_23 = (signed char)-35;
unsigned int var_24 = 33099199U;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-39;
int var_27 = -901952617;
signed char var_28 = (signed char)-112;
int var_29 = 1388255202;
unsigned long long int var_30 = 8888730237607324900ULL;
_Bool var_31 = (_Bool)1;
unsigned long long int var_32 = 9332739346556173844ULL;
_Bool var_33 = (_Bool)0;
unsigned char var_34 = (unsigned char)118;
_Bool var_35 = (_Bool)0;
unsigned char var_36 = (unsigned char)55;
unsigned short var_37 = (unsigned short)8991;
void init() {
}

void checksum() {
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
