#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-29;
unsigned char var_3 = (unsigned char)74;
unsigned char var_4 = (unsigned char)241;
long long int var_5 = 7734579760609992076LL;
unsigned short var_6 = (unsigned short)15555;
short var_7 = (short)22046;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 9614388425948610623ULL;
short var_12 = (short)14213;
unsigned char var_13 = (unsigned char)241;
unsigned char var_14 = (unsigned char)94;
long long int var_15 = 3770436493159056005LL;
int var_17 = -577514011;
int zero = 0;
unsigned char var_18 = (unsigned char)40;
unsigned char var_19 = (unsigned char)129;
unsigned short var_20 = (unsigned short)56521;
long long int var_21 = 6999937458274507020LL;
void init() {
}

void checksum() {
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
