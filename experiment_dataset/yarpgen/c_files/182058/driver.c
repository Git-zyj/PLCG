#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28378;
unsigned short var_1 = (unsigned short)38680;
long long int var_2 = 4749169859874821892LL;
unsigned long long int var_5 = 2932235505187982404ULL;
unsigned short var_6 = (unsigned short)60968;
unsigned char var_7 = (unsigned char)23;
short var_10 = (short)-14615;
unsigned char var_11 = (unsigned char)251;
long long int var_12 = -5718987063996949073LL;
int zero = 0;
signed char var_15 = (signed char)-24;
unsigned short var_16 = (unsigned short)64640;
unsigned char var_17 = (unsigned char)238;
short var_18 = (short)-7846;
void init() {
}

void checksum() {
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
