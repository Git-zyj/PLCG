#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3510921364193278135ULL;
short var_3 = (short)9984;
signed char var_4 = (signed char)40;
int var_7 = 703416888;
long long int var_8 = -5830231610609550666LL;
short var_10 = (short)-5166;
long long int var_11 = 8313638121762933560LL;
unsigned long long int var_12 = 13946387212356275385ULL;
long long int var_14 = -3132974383416724406LL;
int zero = 0;
long long int var_16 = -6944853224697493344LL;
long long int var_17 = -1868857071632145500LL;
unsigned short var_18 = (unsigned short)20080;
int var_19 = 2035695730;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
