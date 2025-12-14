#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27382;
unsigned char var_3 = (unsigned char)75;
unsigned long long int var_4 = 18194718124961218140ULL;
long long int var_5 = -5077327786049462122LL;
unsigned short var_7 = (unsigned short)49560;
signed char var_10 = (signed char)-106;
int zero = 0;
unsigned char var_13 = (unsigned char)39;
int var_14 = -399872304;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
