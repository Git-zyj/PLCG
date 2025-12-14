#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3772;
unsigned short var_2 = (unsigned short)33600;
unsigned short var_5 = (unsigned short)47017;
unsigned short var_7 = (unsigned short)7722;
unsigned short var_14 = (unsigned short)46758;
int zero = 0;
unsigned short var_17 = (unsigned short)10927;
unsigned short var_18 = (unsigned short)57393;
unsigned short var_19 = (unsigned short)44131;
unsigned short var_20 = (unsigned short)50099;
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
