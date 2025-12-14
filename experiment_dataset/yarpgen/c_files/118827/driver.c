#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2381137041U;
unsigned char var_3 = (unsigned char)137;
int var_4 = -678868819;
signed char var_6 = (signed char)-103;
unsigned char var_9 = (unsigned char)54;
unsigned int var_10 = 210958607U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)28884;
unsigned short var_14 = (unsigned short)12637;
unsigned int var_16 = 452109161U;
int zero = 0;
unsigned short var_17 = (unsigned short)26053;
unsigned char var_18 = (unsigned char)78;
unsigned char var_19 = (unsigned char)137;
long long int var_20 = -7528299866364676612LL;
unsigned char var_21 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
