#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20377;
unsigned int var_3 = 4009601087U;
long long int var_4 = -6867702180594017779LL;
unsigned short var_6 = (unsigned short)12567;
int var_7 = 973271515;
unsigned long long int var_8 = 11988811682777976336ULL;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-548;
int var_13 = 705665086;
unsigned long long int var_14 = 8665408192028206743ULL;
short var_15 = (short)-445;
int zero = 0;
short var_19 = (short)-22885;
unsigned long long int var_20 = 12980650560890060172ULL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 279025770U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
