#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2000442144U;
unsigned long long int var_4 = 7616540399630727756ULL;
unsigned long long int var_6 = 15762442494080317514ULL;
unsigned short var_8 = (unsigned short)29851;
signed char var_9 = (signed char)108;
int zero = 0;
long long int var_11 = -6783343517277529261LL;
signed char var_12 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
