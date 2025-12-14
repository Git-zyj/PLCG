#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2136675783;
int var_8 = -978639694;
unsigned char var_9 = (unsigned char)40;
unsigned char var_11 = (unsigned char)245;
signed char var_13 = (signed char)-53;
unsigned char var_14 = (unsigned char)71;
signed char var_16 = (signed char)24;
int zero = 0;
int var_18 = 210216330;
unsigned short var_19 = (unsigned short)57806;
_Bool var_20 = (_Bool)1;
short var_21 = (short)25743;
short var_22 = (short)-277;
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
