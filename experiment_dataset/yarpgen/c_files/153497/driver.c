#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -476214953;
short var_2 = (short)-30578;
unsigned short var_3 = (unsigned short)26965;
unsigned int var_4 = 685763549U;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
long long int var_7 = -4607326339119767999LL;
short var_8 = (short)-5897;
_Bool var_9 = (_Bool)0;
long long int var_10 = 5656209638567008375LL;
short var_11 = (short)-26485;
unsigned char var_12 = (unsigned char)241;
_Bool var_13 = (_Bool)0;
long long int var_14 = 7461126658697697131LL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)54418;
int zero = 0;
unsigned char var_17 = (unsigned char)56;
long long int var_18 = -5956252643870277701LL;
int var_19 = -481145582;
short var_20 = (short)20246;
unsigned char var_21 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
