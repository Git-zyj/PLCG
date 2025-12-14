#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
signed char var_3 = (signed char)84;
unsigned long long int var_5 = 7759037471736502084ULL;
unsigned int var_8 = 2041793761U;
unsigned int var_9 = 4189570253U;
short var_11 = (short)-14372;
unsigned short var_13 = (unsigned short)60863;
int zero = 0;
int var_17 = -1670686143;
unsigned char var_18 = (unsigned char)217;
unsigned short var_19 = (unsigned short)4236;
void init() {
}

void checksum() {
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
