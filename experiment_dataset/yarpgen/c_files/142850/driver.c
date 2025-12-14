#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1779;
short var_1 = (short)4397;
unsigned int var_2 = 4165929983U;
unsigned short var_3 = (unsigned short)17452;
unsigned long long int var_5 = 10842746016360252636ULL;
int var_10 = -1536624619;
int zero = 0;
unsigned int var_11 = 3699162749U;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
