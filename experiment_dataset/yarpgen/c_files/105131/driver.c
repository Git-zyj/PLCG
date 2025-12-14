#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned short var_10 = (unsigned short)57412;
signed char var_13 = (signed char)-26;
int zero = 0;
unsigned short var_19 = (unsigned short)46314;
unsigned char var_20 = (unsigned char)135;
unsigned char var_21 = (unsigned char)198;
short var_22 = (short)10438;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
