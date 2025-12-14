#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)46;
short var_6 = (short)-28052;
unsigned int var_10 = 614547689U;
unsigned long long int var_15 = 15714457971725703652ULL;
long long int var_16 = -4292261592100578322LL;
int zero = 0;
unsigned long long int var_18 = 12191303035413653320ULL;
short var_19 = (short)24788;
unsigned short var_20 = (unsigned short)17061;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
