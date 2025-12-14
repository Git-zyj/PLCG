#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2033785414U;
unsigned int var_4 = 1959474611U;
unsigned long long int var_5 = 12941319624788270260ULL;
short var_6 = (short)-18164;
unsigned long long int var_7 = 12686015766483591208ULL;
unsigned char var_10 = (unsigned char)135;
int zero = 0;
int var_13 = -501652113;
signed char var_14 = (signed char)10;
long long int var_15 = -2224143712376307352LL;
long long int var_16 = 7022242833824377596LL;
unsigned char var_17 = (unsigned char)233;
void init() {
}

void checksum() {
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
