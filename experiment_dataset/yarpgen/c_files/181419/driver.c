#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26592;
unsigned short var_1 = (unsigned short)20976;
signed char var_2 = (signed char)-96;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)83;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-14809;
signed char var_8 = (signed char)34;
unsigned char var_10 = (unsigned char)98;
int zero = 0;
unsigned char var_11 = (unsigned char)25;
int var_12 = -868361676;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)29929;
int var_15 = 854237547;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
