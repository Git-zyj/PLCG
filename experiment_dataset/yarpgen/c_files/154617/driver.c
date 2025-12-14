#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22370;
unsigned long long int var_1 = 15924219558977732164ULL;
short var_2 = (short)-25270;
unsigned char var_4 = (unsigned char)113;
int var_6 = -93107075;
long long int var_7 = 2058521383438069539LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3191773324U;
unsigned int var_15 = 25065952U;
unsigned short var_16 = (unsigned short)45267;
int var_17 = -1547058087;
unsigned long long int var_18 = 7962589859193530110ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
