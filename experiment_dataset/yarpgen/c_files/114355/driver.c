#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
unsigned int var_2 = 3251988426U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 5224227072968702576ULL;
long long int var_8 = -5965185688046537231LL;
unsigned long long int var_9 = 8675818696660135804ULL;
unsigned int var_12 = 3715403546U;
signed char var_14 = (signed char)59;
int zero = 0;
unsigned long long int var_15 = 6683965379860823542ULL;
long long int var_16 = -6632043583730482244LL;
unsigned long long int var_17 = 10286045857872653419ULL;
_Bool var_18 = (_Bool)0;
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
