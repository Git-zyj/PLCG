#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-83;
short var_10 = (short)11300;
unsigned char var_11 = (unsigned char)89;
long long int var_15 = 4826447008224638326LL;
int zero = 0;
short var_18 = (short)19288;
unsigned short var_19 = (unsigned short)49305;
unsigned char var_20 = (unsigned char)58;
short var_21 = (short)-12291;
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
