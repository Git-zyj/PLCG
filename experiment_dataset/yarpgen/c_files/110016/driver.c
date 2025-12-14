#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9006059748896024811LL;
signed char var_3 = (signed char)99;
int var_4 = 105625633;
long long int var_5 = 7366800993425834641LL;
signed char var_9 = (signed char)87;
signed char var_10 = (signed char)6;
long long int var_11 = -463404277070067123LL;
int var_15 = 1141061213;
int zero = 0;
signed char var_16 = (signed char)62;
unsigned char var_17 = (unsigned char)0;
short var_18 = (short)23720;
int var_19 = 1530915531;
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
