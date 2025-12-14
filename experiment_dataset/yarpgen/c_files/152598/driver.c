#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
signed char var_1 = (signed char)-94;
unsigned short var_4 = (unsigned short)56626;
short var_5 = (short)-615;
signed char var_6 = (signed char)109;
short var_8 = (short)-15534;
unsigned int var_10 = 4157198619U;
long long int var_11 = -7805027186162005919LL;
int zero = 0;
unsigned char var_12 = (unsigned char)125;
unsigned short var_13 = (unsigned short)45789;
unsigned int var_14 = 3801892549U;
short var_15 = (short)-28159;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
