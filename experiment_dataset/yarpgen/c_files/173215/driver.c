#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13353944572518628517ULL;
unsigned short var_4 = (unsigned short)19751;
unsigned short var_9 = (unsigned short)63847;
short var_12 = (short)-12242;
_Bool var_13 = (_Bool)0;
short var_14 = (short)14788;
unsigned long long int var_16 = 12711023943335399124ULL;
int zero = 0;
unsigned long long int var_17 = 18018899287815924658ULL;
unsigned long long int var_18 = 11483971384346468240ULL;
unsigned long long int var_19 = 4180649079271800444ULL;
int var_20 = -159571427;
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
