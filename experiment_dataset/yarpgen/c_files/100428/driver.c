#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1658663016;
signed char var_2 = (signed char)7;
unsigned short var_6 = (unsigned short)46279;
long long int var_8 = 4394616689588549382LL;
unsigned char var_11 = (unsigned char)173;
unsigned short var_16 = (unsigned short)57338;
int zero = 0;
unsigned long long int var_17 = 6163880336055059142ULL;
int var_18 = 209243279;
unsigned char var_19 = (unsigned char)173;
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
