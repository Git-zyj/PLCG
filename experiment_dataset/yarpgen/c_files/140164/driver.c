#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1346324158U;
unsigned long long int var_1 = 9972864568092451611ULL;
unsigned int var_2 = 269426833U;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)49;
int var_9 = 328709627;
signed char var_10 = (signed char)118;
unsigned int var_12 = 3280112732U;
unsigned short var_15 = (unsigned short)21481;
int zero = 0;
short var_19 = (short)23284;
long long int var_20 = 1969502737034748410LL;
unsigned long long int var_21 = 17883712171156497523ULL;
unsigned long long int var_22 = 599417598614718724ULL;
unsigned short var_23 = (unsigned short)31790;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
