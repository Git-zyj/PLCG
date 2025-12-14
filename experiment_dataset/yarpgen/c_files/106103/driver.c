#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2906712775U;
int var_3 = -1161447391;
unsigned long long int var_4 = 1787817784165002242ULL;
unsigned long long int var_5 = 6850606490617402134ULL;
unsigned char var_6 = (unsigned char)21;
short var_7 = (short)15556;
unsigned int var_8 = 191982548U;
int var_9 = 62782273;
int zero = 0;
unsigned char var_12 = (unsigned char)221;
long long int var_13 = -2527022779104309617LL;
short var_14 = (short)23953;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
