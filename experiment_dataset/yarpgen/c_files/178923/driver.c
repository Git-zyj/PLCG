#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2280997569U;
unsigned char var_6 = (unsigned char)144;
long long int var_8 = 3350377930757459074LL;
signed char var_10 = (signed char)-123;
int zero = 0;
unsigned char var_15 = (unsigned char)245;
unsigned short var_16 = (unsigned short)39076;
unsigned char var_17 = (unsigned char)28;
unsigned long long int var_18 = 4072766985865613713ULL;
unsigned short var_19 = (unsigned short)19060;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
