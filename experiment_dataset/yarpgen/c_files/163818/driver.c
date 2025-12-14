#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1280122263;
_Bool var_2 = (_Bool)0;
int var_5 = -1843887992;
short var_6 = (short)-8885;
unsigned char var_7 = (unsigned char)82;
unsigned int var_8 = 214714596U;
signed char var_9 = (signed char)89;
int var_14 = -698519236;
signed char var_15 = (signed char)-60;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1718080259U;
unsigned long long int var_18 = 5063967913226244516ULL;
int var_19 = -649220805;
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
