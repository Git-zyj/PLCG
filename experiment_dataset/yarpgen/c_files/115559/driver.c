#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)45248;
unsigned long long int var_6 = 7597497489533982734ULL;
unsigned char var_7 = (unsigned char)100;
unsigned int var_10 = 3127126173U;
long long int var_13 = -7467869197257858728LL;
int zero = 0;
signed char var_14 = (signed char)-21;
unsigned long long int var_15 = 15524871569975414498ULL;
short var_16 = (short)6338;
unsigned long long int var_17 = 14621561052737424732ULL;
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
