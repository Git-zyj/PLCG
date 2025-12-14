#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)202;
_Bool var_8 = (_Bool)1;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)(-127 - 1);
unsigned short var_15 = (unsigned short)15495;
int zero = 0;
unsigned long long int var_18 = 12422927768127507956ULL;
unsigned char var_19 = (unsigned char)147;
void init() {
}

void checksum() {
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
