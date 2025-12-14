#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 796089823;
long long int var_4 = 7581468770808543851LL;
int var_5 = 1151210558;
signed char var_6 = (signed char)-127;
long long int var_7 = 1997891776735475092LL;
short var_8 = (short)-13567;
short var_10 = (short)13850;
int zero = 0;
int var_14 = -1566287131;
long long int var_15 = -3016120945395374979LL;
short var_16 = (short)-19376;
unsigned short var_17 = (unsigned short)52628;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
