#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 718236916;
unsigned long long int var_3 = 8023130847935206283ULL;
short var_4 = (short)2265;
_Bool var_6 = (_Bool)1;
signed char var_15 = (signed char)-90;
unsigned int var_16 = 3961355941U;
int zero = 0;
unsigned int var_19 = 3835168637U;
unsigned char var_20 = (unsigned char)52;
void init() {
}

void checksum() {
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
