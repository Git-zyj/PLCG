#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29286;
signed char var_5 = (signed char)-102;
unsigned short var_10 = (unsigned short)25086;
unsigned char var_16 = (unsigned char)224;
int zero = 0;
signed char var_18 = (signed char)-12;
long long int var_19 = -8464173321128020385LL;
unsigned int var_20 = 1016599519U;
unsigned int var_21 = 1575745204U;
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
