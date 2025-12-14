#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4113980552081790589LL;
int var_2 = 1700282903;
short var_3 = (short)27742;
unsigned int var_4 = 336820473U;
long long int var_5 = 3446088314765227734LL;
unsigned long long int var_6 = 10562305634162331304ULL;
unsigned int var_7 = 2902653700U;
unsigned int var_10 = 2416499828U;
short var_11 = (short)7806;
int var_12 = 1144921254;
unsigned long long int var_14 = 17024008195432960765ULL;
int zero = 0;
unsigned int var_18 = 1576922697U;
unsigned long long int var_19 = 15875480337962029674ULL;
unsigned long long int var_20 = 3939944579020226818ULL;
int var_21 = 1293960659;
void init() {
}

void checksum() {
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
