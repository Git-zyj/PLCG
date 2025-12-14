#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
long long int var_2 = -2251013859121962164LL;
unsigned short var_6 = (unsigned short)31938;
unsigned int var_8 = 3638817530U;
signed char var_9 = (signed char)-108;
int zero = 0;
unsigned int var_10 = 2667744870U;
unsigned short var_11 = (unsigned short)34932;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
