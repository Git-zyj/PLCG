#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30566;
unsigned int var_2 = 53493302U;
unsigned short var_4 = (unsigned short)6202;
unsigned char var_6 = (unsigned char)7;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)4680;
unsigned short var_9 = (unsigned short)6275;
unsigned int var_12 = 356362139U;
int zero = 0;
unsigned int var_18 = 3961847958U;
unsigned long long int var_19 = 5363033398696910171ULL;
unsigned long long int var_20 = 7792043237162455463ULL;
void init() {
}

void checksum() {
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
