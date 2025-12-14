#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19626;
signed char var_3 = (signed char)124;
unsigned short var_5 = (unsigned short)65403;
int var_8 = 1094865771;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)54570;
int var_11 = -2042189511;
short var_12 = (short)5370;
short var_13 = (short)5881;
int zero = 0;
int var_15 = -767531417;
unsigned int var_16 = 608995999U;
long long int var_17 = -5572796670710052341LL;
unsigned short var_18 = (unsigned short)37582;
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
