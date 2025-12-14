#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_14 = -1211621140;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)40021;
unsigned int var_17 = 2596712162U;
unsigned int var_18 = 4183568426U;
unsigned int var_19 = 333619234U;
short var_20 = (short)-8862;
unsigned int var_21 = 872072207U;
int var_22 = -792073006;
int var_23 = -1209945735;
unsigned char var_24 = (unsigned char)64;
_Bool var_25 = (_Bool)0;
int var_26 = 146571914;
unsigned long long int var_27 = 10368153722682467435ULL;
unsigned long long int var_28 = 6184291578502218489ULL;
unsigned short var_29 = (unsigned short)41358;
int var_30 = 1038049995;
signed char var_31 = (signed char)-21;
unsigned long long int var_32 = 3863495012513702074ULL;
int var_33 = 891211734;
signed char var_34 = (signed char)56;
_Bool var_35 = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
