#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27723;
long long int var_7 = 5093839272970792892LL;
long long int var_8 = 8205261648325688560LL;
unsigned long long int var_10 = 2351078373263533739ULL;
long long int var_13 = 4855518194582806145LL;
int zero = 0;
unsigned short var_14 = (unsigned short)31785;
long long int var_15 = -4827422913562747183LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
