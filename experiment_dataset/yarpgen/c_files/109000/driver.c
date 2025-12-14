#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -5652544975936348830LL;
int var_13 = -2127904225;
unsigned int var_14 = 2870282163U;
unsigned char var_16 = (unsigned char)181;
int zero = 0;
unsigned short var_19 = (unsigned short)31588;
short var_20 = (short)-29424;
void init() {
}

void checksum() {
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
