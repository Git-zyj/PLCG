#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
long long int var_1 = -4353035115197813441LL;
long long int var_5 = -880416626412174882LL;
short var_6 = (short)-23895;
signed char var_7 = (signed char)-5;
long long int var_8 = -8878160585389681411LL;
signed char var_11 = (signed char)126;
signed char var_13 = (signed char)-81;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = -926913303;
unsigned short var_16 = (unsigned short)10718;
unsigned short var_17 = (unsigned short)61353;
signed char var_18 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
