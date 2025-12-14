#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34235;
unsigned short var_2 = (unsigned short)27949;
unsigned short var_3 = (unsigned short)43178;
unsigned short var_6 = (unsigned short)37325;
unsigned short var_7 = (unsigned short)45123;
unsigned short var_9 = (unsigned short)55475;
unsigned short var_14 = (unsigned short)1575;
int zero = 0;
unsigned short var_17 = (unsigned short)27773;
unsigned short var_18 = (unsigned short)5298;
unsigned short var_19 = (unsigned short)1550;
unsigned short var_20 = (unsigned short)38586;
unsigned short var_21 = (unsigned short)38424;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
