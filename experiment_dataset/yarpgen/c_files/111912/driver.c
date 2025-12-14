#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
long long int var_2 = 9194292397121092024LL;
int var_3 = -1122482288;
unsigned long long int var_4 = 15487498247591580531ULL;
unsigned char var_5 = (unsigned char)62;
_Bool var_6 = (_Bool)0;
int var_9 = -1150577600;
short var_10 = (short)32587;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)83;
unsigned char var_13 = (unsigned char)158;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-6;
int zero = 0;
unsigned int var_16 = 3067777738U;
int var_17 = 928482473;
int var_18 = -1518658854;
long long int var_19 = 6280317438989063912LL;
unsigned char var_20 = (unsigned char)73;
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
