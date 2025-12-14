#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4172;
int var_1 = -1834268702;
int var_2 = -179063137;
signed char var_4 = (signed char)54;
unsigned char var_5 = (unsigned char)101;
signed char var_6 = (signed char)61;
unsigned short var_9 = (unsigned short)27661;
unsigned short var_12 = (unsigned short)52672;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10588163644432806476ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)64298;
long long int var_16 = 622418132880829440LL;
unsigned long long int var_17 = 9567138035845754977ULL;
short var_18 = (short)5191;
unsigned short var_19 = (unsigned short)11062;
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
