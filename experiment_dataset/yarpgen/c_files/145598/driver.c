#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45846;
unsigned int var_1 = 3489969382U;
unsigned int var_3 = 1842584200U;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)15;
unsigned char var_8 = (unsigned char)202;
signed char var_9 = (signed char)-5;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13714541379778633978ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)2360;
long long int var_13 = 948853553178041963LL;
unsigned char var_14 = (unsigned char)46;
short var_15 = (short)814;
short var_16 = (short)1172;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
