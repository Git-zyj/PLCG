#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_17 = 787604226595793393ULL;
int var_18 = 1405296667;
unsigned short var_19 = (unsigned short)30505;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 163650114584159031ULL;
unsigned int var_22 = 2397022552U;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)27;
long long int var_25 = 5655505941381244220LL;
unsigned int var_26 = 3848342578U;
unsigned short var_27 = (unsigned short)17010;
_Bool var_28 = (_Bool)0;
int var_29 = -614617850;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 8920464082249143281ULL;
unsigned int var_32 = 1456822379U;
unsigned int var_33 = 1631886020U;
_Bool var_34 = (_Bool)0;
long long int var_35 = 1098942122886721307LL;
short var_36 = (short)-12526;
long long int var_37 = -7901127745380816894LL;
unsigned int var_38 = 764275913U;
unsigned long long int var_39 = 9756366801332326890ULL;
unsigned char var_40 = (unsigned char)183;
unsigned int var_41 = 2771165883U;
int var_42 = -954140455;
unsigned short var_43 = (unsigned short)23024;
unsigned int var_44 = 4247663128U;
short var_45 = (short)3665;
signed char var_46 = (signed char)-81;
unsigned short var_47 = (unsigned short)17980;
unsigned long long int var_48 = 189640462787547034ULL;
unsigned long long int var_49 = 9254371607142149942ULL;
unsigned short var_50 = (unsigned short)19673;
_Bool var_51 = (_Bool)0;
short var_52 = (short)-1710;
short var_53 = (short)10244;
short var_54 = (short)24593;
short var_55 = (short)15669;
signed char var_56 = (signed char)26;
unsigned char var_57 = (unsigned char)200;
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
