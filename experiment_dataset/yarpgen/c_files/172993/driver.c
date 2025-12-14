#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 407235312;
unsigned long long int var_4 = 9646112255210672817ULL;
long long int var_10 = 7520981469152239427LL;
int var_12 = 2083992750;
int zero = 0;
unsigned short var_17 = (unsigned short)32554;
int var_18 = -981480335;
int var_19 = -45846131;
unsigned short var_20 = (unsigned short)63178;
void init() {
}

void checksum() {
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
