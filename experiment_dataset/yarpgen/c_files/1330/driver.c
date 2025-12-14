#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14237;
long long int var_4 = -1766231182960279387LL;
unsigned int var_6 = 1797358505U;
short var_7 = (short)-24961;
unsigned short var_8 = (unsigned short)49097;
unsigned char var_11 = (unsigned char)29;
unsigned long long int var_15 = 13157746087003512086ULL;
signed char var_16 = (signed char)-88;
short var_17 = (short)-31695;
int zero = 0;
short var_18 = (short)-11133;
long long int var_19 = 5733281210529455586LL;
unsigned short var_20 = (unsigned short)60159;
long long int var_21 = -3742066066719715866LL;
void init() {
}

void checksum() {
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
