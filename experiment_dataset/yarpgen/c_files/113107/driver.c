#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54576;
unsigned long long int var_1 = 6555794722777501375ULL;
signed char var_2 = (signed char)127;
unsigned long long int var_3 = 16453247644503859374ULL;
unsigned short var_4 = (unsigned short)4153;
short var_6 = (short)23006;
long long int var_7 = 793907770904889080LL;
int zero = 0;
short var_10 = (short)19510;
signed char var_11 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
