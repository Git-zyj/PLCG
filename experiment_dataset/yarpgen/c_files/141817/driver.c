#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-11;
unsigned char var_5 = (unsigned char)50;
signed char var_6 = (signed char)47;
unsigned char var_8 = (unsigned char)55;
unsigned short var_13 = (unsigned short)46142;
int zero = 0;
unsigned short var_17 = (unsigned short)36179;
unsigned short var_18 = (unsigned short)61143;
unsigned char var_19 = (unsigned char)198;
unsigned char var_20 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
