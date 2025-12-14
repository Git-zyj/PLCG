#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4792761506820095564LL;
short var_2 = (short)-8171;
signed char var_3 = (signed char)-90;
unsigned short var_7 = (unsigned short)8493;
unsigned long long int var_9 = 370833673948042405ULL;
int zero = 0;
int var_12 = -1504371759;
unsigned long long int var_13 = 1233328203868124361ULL;
short var_14 = (short)-31202;
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
