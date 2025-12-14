#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12020743299413533883ULL;
unsigned int var_1 = 3446881605U;
short var_5 = (short)28135;
short var_6 = (short)13801;
unsigned int var_7 = 1249382951U;
short var_8 = (short)856;
long long int var_10 = 2100176595347634930LL;
int zero = 0;
signed char var_14 = (signed char)19;
signed char var_15 = (signed char)-68;
long long int var_16 = -1643082637128183371LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
