#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 201018887;
signed char var_2 = (signed char)-45;
unsigned char var_6 = (unsigned char)31;
signed char var_10 = (signed char)-9;
short var_12 = (short)-19006;
short var_16 = (short)27780;
int var_17 = -890434024;
unsigned short var_18 = (unsigned short)59285;
int zero = 0;
unsigned int var_19 = 2242434336U;
signed char var_20 = (signed char)44;
_Bool var_21 = (_Bool)0;
long long int var_22 = 5868347337875550116LL;
short var_23 = (short)18343;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
