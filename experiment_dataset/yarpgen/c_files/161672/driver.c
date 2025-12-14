#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 618635355;
unsigned int var_2 = 1627059256U;
unsigned char var_4 = (unsigned char)101;
unsigned int var_5 = 815472053U;
signed char var_8 = (signed char)88;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 14415036512148492201ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-30238;
int var_16 = -884270186;
signed char var_17 = (signed char)-31;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
