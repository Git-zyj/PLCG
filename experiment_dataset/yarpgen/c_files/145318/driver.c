#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9759697169193711792ULL;
short var_9 = (short)14626;
int zero = 0;
short var_16 = (short)10480;
unsigned char var_17 = (unsigned char)19;
unsigned long long int var_18 = 2770845429593372992ULL;
unsigned short var_19 = (unsigned short)42929;
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
