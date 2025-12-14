#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27834;
signed char var_5 = (signed char)-118;
signed char var_6 = (signed char)-88;
unsigned short var_9 = (unsigned short)29495;
long long int var_13 = 2190930541516618518LL;
unsigned int var_17 = 3973504879U;
int zero = 0;
long long int var_20 = -6995106630273606130LL;
short var_21 = (short)-29936;
void init() {
}

void checksum() {
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
