#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 13783067532226385670ULL;
short var_3 = (short)16707;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)20;
signed char var_7 = (signed char)-66;
unsigned long long int var_8 = 11133464813045671931ULL;
int var_10 = 153488237;
int var_11 = -1452350439;
unsigned short var_12 = (unsigned short)10966;
unsigned long long int var_13 = 14435400770666429046ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)34729;
int zero = 0;
long long int var_16 = -3383812791652048417LL;
short var_17 = (short)4515;
_Bool var_18 = (_Bool)0;
int var_19 = 1707991735;
unsigned int var_20 = 115036967U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
