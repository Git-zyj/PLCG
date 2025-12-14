#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -247335591;
unsigned short var_1 = (unsigned short)65241;
unsigned short var_2 = (unsigned short)65169;
unsigned short var_3 = (unsigned short)35254;
unsigned char var_4 = (unsigned char)174;
unsigned char var_5 = (unsigned char)21;
long long int var_6 = 5578517945688450116LL;
unsigned short var_8 = (unsigned short)33025;
unsigned char var_9 = (unsigned char)28;
_Bool var_10 = (_Bool)0;
int var_12 = -1911980210;
int zero = 0;
int var_13 = -432842386;
unsigned char var_14 = (unsigned char)151;
unsigned short var_15 = (unsigned short)2251;
int var_16 = 274869154;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
