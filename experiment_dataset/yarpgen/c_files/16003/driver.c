#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_10 = (unsigned short)17149;
long long int var_11 = 3498390664573070506LL;
signed char var_12 = (signed char)-86;
signed char var_13 = (signed char)-92;
signed char var_14 = (signed char)-32;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)24208;
unsigned short var_17 = (unsigned short)29324;
unsigned short var_18 = (unsigned short)33191;
unsigned char var_19 = (unsigned char)178;
unsigned short var_20 = (unsigned short)12867;
int var_21 = -622178068;
int var_22 = 1162307106;
unsigned short var_23 = (unsigned short)35906;
signed char var_24 = (signed char)73;
signed char var_25 = (signed char)-24;
unsigned int var_26 = 372020581U;
unsigned int var_27 = 3351021620U;
int var_28 = -1830438044;
long long int var_29 = 176657161054179647LL;
short var_30 = (short)15982;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)1;
_Bool var_33 = (_Bool)1;
short var_34 = (short)-4584;
int var_35 = -1127168717;
unsigned long long int var_36 = 4535411469005348766ULL;
unsigned short var_37 = (unsigned short)20693;
short var_38 = (short)24065;
int var_39 = -2082856895;
unsigned int var_40 = 2267362481U;
long long int var_41 = 2762785406441719364LL;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
