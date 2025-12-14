#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)115;
unsigned char var_5 = (unsigned char)226;
unsigned int var_14 = 2909791256U;
unsigned long long int var_18 = 862201926488211570ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)47394;
short var_21 = (short)22685;
signed char var_22 = (signed char)-9;
unsigned char var_23 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
