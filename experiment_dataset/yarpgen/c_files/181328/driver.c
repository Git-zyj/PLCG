#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4713470637522330641LL;
int var_1 = 2103704787;
short var_2 = (short)25625;
short var_3 = (short)-17261;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)22797;
_Bool var_7 = (_Bool)1;
short var_8 = (short)9023;
unsigned char var_9 = (unsigned char)254;
unsigned int var_11 = 3639052811U;
int zero = 0;
unsigned short var_13 = (unsigned short)46145;
unsigned long long int var_14 = 6508613826811891838ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
