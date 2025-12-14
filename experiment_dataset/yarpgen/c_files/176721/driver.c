#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25456;
_Bool var_2 = (_Bool)0;
short var_5 = (short)-3573;
unsigned char var_8 = (unsigned char)95;
signed char var_9 = (signed char)-105;
unsigned char var_10 = (unsigned char)38;
signed char var_11 = (signed char)2;
int zero = 0;
unsigned long long int var_15 = 1574992185763127998ULL;
unsigned short var_16 = (unsigned short)27229;
unsigned short var_17 = (unsigned short)35869;
int var_18 = -797863344;
short var_19 = (short)6742;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
