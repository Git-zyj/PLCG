#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62181;
long long int var_4 = -7371759484590214343LL;
short var_5 = (short)8720;
unsigned short var_6 = (unsigned short)46008;
unsigned short var_7 = (unsigned short)22411;
unsigned short var_8 = (unsigned short)5722;
unsigned short var_11 = (unsigned short)40380;
unsigned char var_13 = (unsigned char)234;
int zero = 0;
unsigned int var_18 = 1279958020U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
