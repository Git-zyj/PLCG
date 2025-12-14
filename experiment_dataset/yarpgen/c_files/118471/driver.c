#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10162;
_Bool var_6 = (_Bool)0;
long long int var_8 = 3827934317093300861LL;
unsigned char var_9 = (unsigned char)254;
short var_12 = (short)-3237;
long long int var_16 = -709726204011662459LL;
unsigned char var_17 = (unsigned char)33;
int zero = 0;
unsigned long long int var_19 = 4538606737236114458ULL;
long long int var_20 = -4525884136852412231LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
