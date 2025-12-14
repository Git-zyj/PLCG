#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2389913916U;
short var_2 = (short)-18882;
int var_3 = -852963543;
short var_4 = (short)-7;
unsigned long long int var_5 = 16072898768402411807ULL;
unsigned char var_7 = (unsigned char)108;
unsigned short var_12 = (unsigned short)14427;
unsigned short var_13 = (unsigned short)6506;
int zero = 0;
int var_17 = -1274056025;
short var_18 = (short)-18659;
unsigned long long int var_19 = 7593387101476307328ULL;
unsigned short var_20 = (unsigned short)13703;
unsigned short var_21 = (unsigned short)28549;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
