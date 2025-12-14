#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3145064912U;
unsigned short var_5 = (unsigned short)17081;
int var_7 = 923971143;
unsigned char var_12 = (unsigned char)212;
int zero = 0;
unsigned long long int var_14 = 7482503823981938983ULL;
int var_15 = -989091723;
short var_16 = (short)13234;
int var_17 = -273250010;
long long int var_18 = 5767634247027255285LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
