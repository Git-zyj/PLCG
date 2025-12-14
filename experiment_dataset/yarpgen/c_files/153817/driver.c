#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned int var_1 = 3811725251U;
unsigned char var_3 = (unsigned char)190;
unsigned long long int var_4 = 15706073489032042470ULL;
int var_5 = 1122648574;
unsigned long long int var_7 = 6327807483705668493ULL;
unsigned int var_9 = 3587783708U;
unsigned char var_10 = (unsigned char)1;
unsigned short var_11 = (unsigned short)10111;
int zero = 0;
short var_12 = (short)28465;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4082497063U;
short var_15 = (short)10692;
short var_16 = (short)25701;
int var_17 = -1379972052;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
