#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3665122740847284557LL;
unsigned char var_2 = (unsigned char)207;
unsigned short var_4 = (unsigned short)10509;
long long int var_5 = 6839240566734261261LL;
unsigned int var_8 = 3687804222U;
unsigned long long int var_11 = 6545209728910451638ULL;
signed char var_13 = (signed char)-73;
int zero = 0;
int var_14 = -532932270;
unsigned int var_15 = 2478564868U;
int var_16 = 948379049;
unsigned int var_17 = 1093416090U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
