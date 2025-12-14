#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15439;
_Bool var_3 = (_Bool)0;
int var_4 = 2088870948;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 6197297623637968580ULL;
long long int var_18 = -2397091227685732278LL;
int zero = 0;
long long int var_19 = 2137564917703785615LL;
unsigned int var_20 = 2862179275U;
unsigned char var_21 = (unsigned char)33;
unsigned int var_22 = 3417386391U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
