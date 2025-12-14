#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)32;
unsigned long long int var_3 = 8282408869970528326ULL;
int var_5 = -1563370974;
short var_6 = (short)-16363;
unsigned short var_12 = (unsigned short)52351;
int var_15 = -1074467742;
int zero = 0;
unsigned short var_16 = (unsigned short)40821;
int var_17 = 2033012581;
short var_18 = (short)-5389;
int var_19 = 1421223799;
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
