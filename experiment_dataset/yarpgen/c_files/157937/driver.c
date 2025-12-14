#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1739835389U;
short var_1 = (short)28654;
unsigned char var_2 = (unsigned char)27;
unsigned short var_3 = (unsigned short)20344;
int var_4 = 1383103713;
int var_5 = 104403992;
short var_8 = (short)25857;
unsigned char var_10 = (unsigned char)116;
unsigned int var_11 = 3409562203U;
long long int var_13 = 6203814062796493357LL;
unsigned long long int var_14 = 16857046310190623467ULL;
unsigned char var_15 = (unsigned char)142;
int zero = 0;
long long int var_16 = -7875148736714948863LL;
unsigned char var_17 = (unsigned char)135;
int var_18 = 1922164488;
unsigned int var_19 = 2200341619U;
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
