#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1585705241U;
unsigned long long int var_5 = 17270041378189937235ULL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-21160;
_Bool var_13 = (_Bool)1;
long long int var_14 = -5140124978761415454LL;
unsigned long long int var_15 = 8851667384111104121ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)151;
signed char var_17 = (signed char)40;
signed char var_18 = (signed char)73;
int var_19 = 1745423311;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
