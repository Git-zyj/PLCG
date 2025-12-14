#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2534467015U;
unsigned short var_1 = (unsigned short)55577;
signed char var_2 = (signed char)67;
unsigned short var_4 = (unsigned short)59303;
unsigned char var_6 = (unsigned char)18;
int zero = 0;
short var_10 = (short)9876;
short var_11 = (short)27914;
long long int var_12 = -6419312850396940613LL;
short var_13 = (short)21881;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
