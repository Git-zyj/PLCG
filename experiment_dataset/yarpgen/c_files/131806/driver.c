#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4848217432005390760LL;
long long int var_2 = 6474390724153072421LL;
signed char var_4 = (signed char)62;
short var_7 = (short)-5184;
unsigned int var_8 = 933832821U;
unsigned long long int var_10 = 11550724471502244614ULL;
signed char var_11 = (signed char)-59;
int zero = 0;
unsigned short var_14 = (unsigned short)50656;
short var_15 = (short)-32216;
unsigned long long int var_16 = 2858890401272724659ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
