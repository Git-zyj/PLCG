#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)109;
unsigned int var_6 = 733112305U;
long long int var_10 = -2583059022785177872LL;
signed char var_11 = (signed char)-1;
int zero = 0;
short var_16 = (short)-12662;
unsigned short var_17 = (unsigned short)55815;
void init() {
}

void checksum() {
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
