#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47023;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)42412;
signed char var_7 = (signed char)1;
int var_8 = 105374302;
int var_11 = 249579046;
int var_12 = -784654170;
unsigned char var_13 = (unsigned char)79;
int zero = 0;
unsigned short var_14 = (unsigned short)1397;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)47980;
int var_17 = 665474313;
void init() {
}

void checksum() {
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
