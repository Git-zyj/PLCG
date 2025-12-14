#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24578;
short var_1 = (short)8045;
unsigned char var_3 = (unsigned char)127;
_Bool var_4 = (_Bool)0;
long long int var_5 = 7359119619831932627LL;
short var_6 = (short)18186;
long long int var_7 = 1590849634163893293LL;
unsigned int var_9 = 3281090368U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
long long int var_13 = 7724345674543344265LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-12907;
unsigned char var_18 = (unsigned char)34;
unsigned char var_19 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
