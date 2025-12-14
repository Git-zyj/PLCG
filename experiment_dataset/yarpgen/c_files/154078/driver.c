#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2065315834;
unsigned char var_3 = (unsigned char)119;
unsigned short var_6 = (unsigned short)12108;
unsigned char var_8 = (unsigned char)111;
short var_10 = (short)9164;
int zero = 0;
int var_11 = 1531228881;
int var_12 = -344067959;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
