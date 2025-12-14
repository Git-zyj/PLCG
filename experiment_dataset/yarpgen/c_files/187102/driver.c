#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-126;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_8 = 1735435767158547441LL;
int var_11 = 2053708863;
unsigned char var_12 = (unsigned char)150;
long long int var_13 = -6989724289621912707LL;
signed char var_14 = (signed char)33;
int zero = 0;
unsigned long long int var_15 = 14199694806984207066ULL;
int var_16 = -1427126754;
short var_17 = (short)20816;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
