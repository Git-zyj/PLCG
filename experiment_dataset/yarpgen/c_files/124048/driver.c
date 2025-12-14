#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8371;
signed char var_2 = (signed char)-19;
signed char var_4 = (signed char)-90;
unsigned char var_6 = (unsigned char)187;
int var_7 = -1743268486;
unsigned long long int var_8 = 17979554104616186876ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 8717167939947328566ULL;
unsigned int var_11 = 1332844092U;
unsigned int var_12 = 2603875559U;
unsigned long long int var_13 = 13131736156394546558ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)244;
unsigned int var_16 = 4071881315U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 510026203U;
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
