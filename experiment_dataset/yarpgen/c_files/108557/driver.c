#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1474058757;
unsigned char var_5 = (unsigned char)227;
short var_10 = (short)5150;
int var_18 = -1473321623;
int zero = 0;
unsigned long long int var_19 = 776623668867967373ULL;
unsigned short var_20 = (unsigned short)20599;
unsigned short var_21 = (unsigned short)4159;
void init() {
}

void checksum() {
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
