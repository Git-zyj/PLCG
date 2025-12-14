#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60216;
unsigned short var_3 = (unsigned short)63583;
unsigned long long int var_4 = 12243816833161815418ULL;
signed char var_5 = (signed char)-39;
int var_6 = 957281781;
unsigned int var_7 = 364459995U;
unsigned short var_8 = (unsigned short)56027;
unsigned int var_10 = 30371930U;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -686506951;
signed char var_14 = (signed char)119;
unsigned int var_15 = 342990189U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
