#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5739054158463731544LL;
long long int var_2 = 3127591522361113767LL;
unsigned short var_3 = (unsigned short)18190;
unsigned char var_4 = (unsigned char)51;
short var_5 = (short)9048;
signed char var_6 = (signed char)1;
unsigned char var_7 = (unsigned char)136;
unsigned char var_8 = (unsigned char)169;
unsigned char var_9 = (unsigned char)199;
unsigned short var_10 = (unsigned short)29828;
unsigned long long int var_13 = 10457266820353095972ULL;
signed char var_14 = (signed char)-118;
unsigned long long int var_15 = 7447772737252485872ULL;
int zero = 0;
int var_16 = 1319600129;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-114;
long long int var_19 = -7236618717996311481LL;
int var_20 = 1202982561;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
