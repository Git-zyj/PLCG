#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16398;
unsigned long long int var_3 = 17692325333596716577ULL;
long long int var_6 = 8893860420551168033LL;
int var_10 = 1538804684;
short var_11 = (short)-28643;
int var_12 = -883744521;
int var_13 = -831264985;
int zero = 0;
unsigned short var_16 = (unsigned short)28096;
signed char var_17 = (signed char)-4;
void init() {
}

void checksum() {
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
