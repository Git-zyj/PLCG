#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5370;
short var_3 = (short)1209;
int var_4 = -1431825909;
unsigned int var_5 = 836751065U;
signed char var_6 = (signed char)-93;
unsigned short var_8 = (unsigned short)15372;
unsigned int var_12 = 2808339855U;
long long int var_13 = 1620649568966812508LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 3141712263U;
int zero = 0;
unsigned int var_19 = 761343040U;
unsigned long long int var_20 = 1267334005919852414ULL;
unsigned int var_21 = 4069116731U;
long long int var_22 = 7610099476891243337LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
