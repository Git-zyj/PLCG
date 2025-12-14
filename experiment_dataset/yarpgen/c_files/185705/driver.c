#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21944;
long long int var_4 = -187960682817424931LL;
signed char var_7 = (signed char)49;
unsigned int var_10 = 3074814598U;
signed char var_11 = (signed char)-11;
int zero = 0;
long long int var_12 = -7988816007739535921LL;
unsigned short var_13 = (unsigned short)37594;
short var_14 = (short)-2123;
short var_15 = (short)-32011;
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
