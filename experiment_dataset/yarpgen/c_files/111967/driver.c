#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3838;
signed char var_3 = (signed char)68;
unsigned long long int var_5 = 10580076421045749281ULL;
unsigned char var_6 = (unsigned char)55;
unsigned char var_10 = (unsigned char)47;
signed char var_11 = (signed char)-14;
int zero = 0;
unsigned char var_14 = (unsigned char)100;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
