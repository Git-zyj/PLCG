#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
short var_18 = (short)26547;
short var_19 = (short)-17424;
unsigned char var_20 = (unsigned char)23;
int var_21 = 386500482;
signed char var_22 = (signed char)69;
unsigned int var_23 = 2554477173U;
signed char var_24 = (signed char)96;
int var_25 = 1654294293;
unsigned char var_26 = (unsigned char)178;
unsigned short var_27 = (unsigned short)27921;
short var_28 = (short)-23923;
long long int var_29 = 5856634182169734434LL;
unsigned long long int var_30 = 3656824140746576100ULL;
unsigned char var_31 = (unsigned char)114;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)219;
unsigned short var_34 = (unsigned short)35620;
short var_35 = (short)4102;
unsigned int var_36 = 2500649678U;
unsigned int var_37 = 1747497196U;
unsigned char var_38 = (unsigned char)150;
short var_39 = (short)26544;
unsigned char var_40 = (unsigned char)82;
signed char var_41 = (signed char)-119;
unsigned short var_42 = (unsigned short)9989;
unsigned short var_43 = (unsigned short)3248;
unsigned long long int var_44 = 7772410597825487928ULL;
unsigned char var_45 = (unsigned char)112;
long long int var_46 = 6138420012976046682LL;
unsigned char var_47 = (unsigned char)93;
signed char var_48 = (signed char)103;
void init() {
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
