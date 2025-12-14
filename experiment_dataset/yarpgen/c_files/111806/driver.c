#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4113700753U;
unsigned long long int var_1 = 4280839943222964194ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)136;
unsigned long long int var_8 = 12123212470022577266ULL;
unsigned short var_9 = (unsigned short)43461;
int var_10 = -347090994;
unsigned long long int var_11 = 13790636868837774915ULL;
short var_12 = (short)12488;
unsigned long long int var_13 = 12172251912183142620ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-76;
unsigned int var_16 = 3084616430U;
int var_17 = -643497600;
signed char var_18 = (signed char)-96;
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
