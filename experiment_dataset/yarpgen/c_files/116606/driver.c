#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)31;
signed char var_4 = (signed char)-101;
unsigned char var_5 = (unsigned char)9;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)6;
short var_12 = (short)14852;
unsigned short var_13 = (unsigned short)46191;
int zero = 0;
unsigned short var_15 = (unsigned short)52204;
unsigned short var_16 = (unsigned short)49349;
signed char var_17 = (signed char)62;
unsigned int var_18 = 2290712670U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
