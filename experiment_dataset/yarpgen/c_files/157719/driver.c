#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7417228400148730295LL;
unsigned long long int var_6 = 6708270183334841943ULL;
unsigned short var_7 = (unsigned short)18032;
unsigned char var_11 = (unsigned char)67;
int zero = 0;
signed char var_17 = (signed char)-108;
short var_18 = (short)23847;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
