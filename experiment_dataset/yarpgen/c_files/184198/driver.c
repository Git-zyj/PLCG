#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 7948067586370777162ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)228;
unsigned char var_9 = (unsigned char)77;
short var_10 = (short)15748;
unsigned char var_11 = (unsigned char)174;
unsigned char var_12 = (unsigned char)49;
int zero = 0;
unsigned long long int var_17 = 10796081035648477055ULL;
unsigned int var_18 = 986736446U;
_Bool var_19 = (_Bool)1;
short var_20 = (short)25146;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
