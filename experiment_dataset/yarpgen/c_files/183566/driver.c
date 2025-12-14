#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4041312370724060581ULL;
unsigned char var_5 = (unsigned char)33;
long long int var_11 = -7555435486400909974LL;
short var_12 = (short)26871;
int zero = 0;
unsigned long long int var_17 = 10059355800057404797ULL;
unsigned short var_18 = (unsigned short)20360;
short var_19 = (short)30642;
void init() {
}

void checksum() {
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
