#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24606;
unsigned short var_4 = (unsigned short)16378;
unsigned char var_7 = (unsigned char)31;
unsigned char var_8 = (unsigned char)150;
unsigned char var_12 = (unsigned char)68;
int zero = 0;
unsigned short var_16 = (unsigned short)65066;
unsigned int var_17 = 4071375610U;
unsigned long long int var_18 = 11656471309922558059ULL;
unsigned long long int var_19 = 7249764127608222633ULL;
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
