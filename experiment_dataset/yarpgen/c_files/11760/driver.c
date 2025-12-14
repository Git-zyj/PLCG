#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19941;
unsigned short var_3 = (unsigned short)24892;
int var_4 = 98230733;
short var_6 = (short)32541;
unsigned int var_7 = 1552847273U;
unsigned long long int var_8 = 13654245312535167255ULL;
unsigned long long int var_13 = 16024611686700106671ULL;
unsigned int var_14 = 428783650U;
unsigned int var_15 = 2167306562U;
unsigned short var_16 = (unsigned short)32688;
signed char var_18 = (signed char)-10;
int zero = 0;
signed char var_19 = (signed char)-59;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
