#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26078;
unsigned char var_4 = (unsigned char)23;
unsigned int var_6 = 1215896756U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 711586600969432087ULL;
unsigned long long int var_10 = 18407777500219692190ULL;
short var_11 = (short)29293;
signed char var_12 = (signed char)4;
int zero = 0;
unsigned int var_14 = 409236066U;
unsigned int var_15 = 872260187U;
unsigned long long int var_16 = 2088863211448746302ULL;
short var_17 = (short)-29952;
void init() {
}

void checksum() {
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
