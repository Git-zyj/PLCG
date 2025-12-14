#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
signed char var_3 = (signed char)-56;
short var_5 = (short)13991;
unsigned short var_6 = (unsigned short)44032;
short var_10 = (short)14619;
int zero = 0;
long long int var_11 = 8289104059318714931LL;
int var_12 = -231194784;
unsigned char var_13 = (unsigned char)144;
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
