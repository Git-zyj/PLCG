#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1494725086U;
unsigned int var_2 = 356590554U;
unsigned long long int var_3 = 9623712448158778747ULL;
unsigned short var_6 = (unsigned short)3097;
unsigned int var_8 = 3455173841U;
unsigned long long int var_9 = 11501805379358008433ULL;
unsigned short var_13 = (unsigned short)43291;
int zero = 0;
unsigned long long int var_14 = 12386868526992767308ULL;
unsigned long long int var_15 = 7048910397722934059ULL;
long long int var_16 = -7928186520471433467LL;
long long int var_17 = -2874924009652434486LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
