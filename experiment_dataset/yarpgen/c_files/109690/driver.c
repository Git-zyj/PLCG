#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1738877647U;
unsigned char var_3 = (unsigned char)96;
_Bool var_4 = (_Bool)0;
unsigned int var_8 = 373150834U;
signed char var_9 = (signed char)-53;
int var_10 = -1896808363;
unsigned char var_11 = (unsigned char)25;
signed char var_13 = (signed char)-125;
unsigned char var_15 = (unsigned char)81;
int zero = 0;
unsigned int var_19 = 1744080168U;
short var_20 = (short)-24522;
unsigned long long int var_21 = 16570441673479852849ULL;
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
