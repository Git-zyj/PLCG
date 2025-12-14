#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1198325240;
unsigned short var_3 = (unsigned short)43807;
unsigned short var_4 = (unsigned short)39951;
unsigned char var_5 = (unsigned char)148;
unsigned int var_6 = 171232778U;
int var_8 = -1642204703;
unsigned char var_10 = (unsigned char)180;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)8;
int var_13 = -212276276;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
