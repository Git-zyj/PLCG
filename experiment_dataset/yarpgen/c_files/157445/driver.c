#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 559528642;
int var_1 = -1132847074;
unsigned long long int var_5 = 12148458473279415716ULL;
long long int var_7 = 6415641598127877402LL;
long long int var_11 = -2835688244725897153LL;
long long int var_14 = -5090681826065760420LL;
unsigned short var_15 = (unsigned short)16563;
int zero = 0;
unsigned short var_17 = (unsigned short)13496;
unsigned short var_18 = (unsigned short)65366;
unsigned long long int var_19 = 2099734451624791379ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
