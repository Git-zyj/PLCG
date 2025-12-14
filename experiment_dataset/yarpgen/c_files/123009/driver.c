#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
unsigned char var_2 = (unsigned char)112;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)1442;
unsigned long long int var_8 = 16879975970832711244ULL;
unsigned char var_9 = (unsigned char)179;
short var_10 = (short)10615;
int var_11 = -439018436;
unsigned int var_12 = 2845553720U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)27425;
short var_17 = (short)-12373;
unsigned char var_19 = (unsigned char)0;
int zero = 0;
signed char var_20 = (signed char)-62;
unsigned long long int var_21 = 13754371720969221180ULL;
short var_22 = (short)7564;
void init() {
}

void checksum() {
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
