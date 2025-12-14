#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6172;
unsigned int var_5 = 1767510026U;
unsigned int var_6 = 3610477719U;
unsigned long long int var_7 = 11893387208870400419ULL;
unsigned long long int var_8 = 15256446368587115477ULL;
int var_9 = 836054695;
unsigned long long int var_11 = 10020526152387928912ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 3820935193170549237ULL;
int zero = 0;
unsigned long long int var_15 = 9962717786800462102ULL;
short var_16 = (short)-5940;
long long int var_17 = -5232766444291502657LL;
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
