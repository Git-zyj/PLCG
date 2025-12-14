#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
unsigned char var_1 = (unsigned char)69;
unsigned short var_5 = (unsigned short)11894;
signed char var_6 = (signed char)-69;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)17;
signed char var_16 = (signed char)-17;
int zero = 0;
signed char var_18 = (signed char)79;
int var_19 = -1577911795;
unsigned char var_20 = (unsigned char)255;
unsigned int var_21 = 1982230517U;
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
