#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 737613680;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)31;
_Bool var_6 = (_Bool)0;
int var_7 = 1319951853;
unsigned char var_8 = (unsigned char)84;
unsigned char var_10 = (unsigned char)47;
int var_12 = 739132613;
int var_13 = -1850972374;
unsigned char var_14 = (unsigned char)10;
unsigned short var_15 = (unsigned short)41167;
unsigned short var_16 = (unsigned short)18574;
int zero = 0;
unsigned int var_17 = 2516193526U;
unsigned int var_18 = 2793285324U;
unsigned short var_19 = (unsigned short)31513;
int var_20 = 2141816550;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
