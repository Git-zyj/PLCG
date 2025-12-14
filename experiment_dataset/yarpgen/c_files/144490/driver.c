#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5310758004769106550LL;
unsigned int var_2 = 1833332360U;
unsigned short var_6 = (unsigned short)58141;
int var_7 = -1337311990;
long long int var_11 = -5952974919213257082LL;
int var_14 = -1894534332;
short var_15 = (short)26011;
long long int var_16 = 4959552312040405618LL;
unsigned short var_17 = (unsigned short)20551;
int zero = 0;
unsigned long long int var_20 = 5002190245769024743ULL;
short var_21 = (short)29111;
unsigned char var_22 = (unsigned char)234;
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
