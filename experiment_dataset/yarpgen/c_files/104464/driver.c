#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
unsigned short var_1 = (unsigned short)45553;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_8 = -8178785851715422443LL;
unsigned short var_9 = (unsigned short)11816;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)24594;
signed char var_15 = (signed char)4;
unsigned int var_18 = 1113531821U;
int zero = 0;
unsigned char var_19 = (unsigned char)74;
int var_20 = 1631992465;
unsigned char var_21 = (unsigned char)222;
int var_22 = 950345189;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
