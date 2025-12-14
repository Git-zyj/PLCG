#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
unsigned int var_4 = 2091245232U;
int var_6 = -109667286;
short var_7 = (short)9860;
unsigned short var_8 = (unsigned short)61397;
short var_9 = (short)-8606;
unsigned long long int var_10 = 15153852412508326256ULL;
unsigned short var_11 = (unsigned short)42941;
short var_13 = (short)-17189;
signed char var_14 = (signed char)77;
signed char var_16 = (signed char)37;
unsigned char var_18 = (unsigned char)108;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 4582067077004375070ULL;
unsigned long long int var_22 = 11144614028129572987ULL;
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
