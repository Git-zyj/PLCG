#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)25;
unsigned long long int var_5 = 14906278219259274534ULL;
short var_6 = (short)-28112;
unsigned char var_7 = (unsigned char)60;
unsigned int var_8 = 3070062581U;
short var_10 = (short)-17735;
int zero = 0;
unsigned short var_11 = (unsigned short)16571;
unsigned short var_12 = (unsigned short)17229;
long long int var_13 = -1184056634130354075LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
