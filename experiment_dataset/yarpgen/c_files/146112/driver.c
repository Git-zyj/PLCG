#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)73;
short var_6 = (short)28593;
int zero = 0;
unsigned short var_12 = (unsigned short)37106;
unsigned char var_13 = (unsigned char)137;
unsigned char var_14 = (unsigned char)181;
signed char var_15 = (signed char)-125;
long long int var_16 = 6871905527602098153LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
