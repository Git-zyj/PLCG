#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)15951;
short var_5 = (short)2793;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-17896;
signed char var_9 = (signed char)127;
short var_10 = (short)7320;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)-40;
int var_19 = -1741702591;
int zero = 0;
short var_20 = (short)-6903;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 17903374997584010408ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
