#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8508959397014435278LL;
unsigned char var_6 = (unsigned char)153;
unsigned char var_12 = (unsigned char)185;
unsigned short var_14 = (unsigned short)35883;
int zero = 0;
signed char var_16 = (signed char)-77;
unsigned short var_17 = (unsigned short)56861;
unsigned char var_18 = (unsigned char)27;
unsigned char var_19 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
