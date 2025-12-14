#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1159299289;
long long int var_7 = 181964132589166192LL;
unsigned long long int var_8 = 568238937252926322ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)227;
int var_17 = -360005375;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
