#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9452;
signed char var_1 = (signed char)-54;
long long int var_2 = 665728091587049893LL;
unsigned short var_5 = (unsigned short)33848;
unsigned long long int var_7 = 7814598521236893116ULL;
unsigned int var_8 = 103242939U;
long long int var_10 = 6859738770923739188LL;
unsigned int var_11 = 2165042774U;
int zero = 0;
long long int var_12 = 3363924100447285402LL;
short var_13 = (short)15598;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
