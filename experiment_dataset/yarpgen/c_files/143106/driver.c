#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13652940804944736305ULL;
signed char var_2 = (signed char)4;
unsigned short var_5 = (unsigned short)63407;
int var_6 = -925233792;
int var_7 = -681825168;
signed char var_8 = (signed char)-102;
unsigned short var_11 = (unsigned short)16406;
long long int var_13 = -5575915758491906688LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_18 = 1549626003;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)70;
short var_21 = (short)-29613;
unsigned short var_22 = (unsigned short)8715;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
