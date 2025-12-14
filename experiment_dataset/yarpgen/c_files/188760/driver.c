#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
unsigned long long int var_1 = 13671057935279787711ULL;
unsigned int var_6 = 3463505154U;
long long int var_7 = -7576603682343990653LL;
long long int var_8 = -3128381643150714679LL;
unsigned int var_10 = 3352382567U;
short var_13 = (short)22474;
int zero = 0;
unsigned char var_16 = (unsigned char)255;
signed char var_17 = (signed char)-118;
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
