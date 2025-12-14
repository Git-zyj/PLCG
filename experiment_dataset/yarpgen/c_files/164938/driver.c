#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)229;
unsigned short var_14 = (unsigned short)46055;
int zero = 0;
unsigned char var_16 = (unsigned char)12;
unsigned int var_17 = 1203953958U;
long long int var_18 = -5553623757957060424LL;
long long int var_19 = -2942566769019735373LL;
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
