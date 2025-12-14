#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 303992577;
unsigned long long int var_6 = 3437279553116055383ULL;
short var_10 = (short)16725;
short var_13 = (short)30644;
unsigned char var_14 = (unsigned char)3;
int zero = 0;
int var_15 = 487864178;
unsigned long long int var_16 = 14195274491237330643ULL;
short var_17 = (short)4139;
long long int var_18 = -4091455812414731522LL;
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
