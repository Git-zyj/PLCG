#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21032;
unsigned char var_11 = (unsigned char)15;
long long int var_15 = -718369903381019775LL;
int zero = 0;
long long int var_17 = 6765694627371904322LL;
long long int var_18 = 1541642378340397722LL;
unsigned short var_19 = (unsigned short)60405;
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
