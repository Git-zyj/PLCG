#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30616;
unsigned short var_2 = (unsigned short)39843;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)107;
int var_9 = 918142084;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 16173535063335083816ULL;
long long int var_13 = 542426462532683373LL;
int var_15 = -704825827;
int zero = 0;
unsigned long long int var_16 = 1369806739945309930ULL;
signed char var_17 = (signed char)99;
unsigned long long int var_18 = 3713631906915777518ULL;
signed char var_19 = (signed char)-39;
unsigned short var_20 = (unsigned short)25436;
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
