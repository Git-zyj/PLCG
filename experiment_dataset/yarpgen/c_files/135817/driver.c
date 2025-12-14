#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)53;
unsigned int var_5 = 3616878900U;
int var_8 = 805045106;
unsigned short var_11 = (unsigned short)43805;
long long int var_14 = 936934680969550261LL;
int zero = 0;
unsigned short var_16 = (unsigned short)13216;
unsigned long long int var_17 = 13728038632907498440ULL;
unsigned char var_18 = (unsigned char)180;
_Bool var_19 = (_Bool)0;
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
