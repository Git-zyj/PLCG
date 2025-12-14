#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8673348357211820735LL;
unsigned char var_8 = (unsigned char)240;
unsigned short var_14 = (unsigned short)30263;
unsigned int var_15 = 901921954U;
int zero = 0;
unsigned short var_18 = (unsigned short)58595;
unsigned short var_19 = (unsigned short)61904;
void init() {
}

void checksum() {
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
