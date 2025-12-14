#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2929080050831758203LL;
unsigned char var_4 = (unsigned char)82;
int var_6 = 516949237;
long long int var_9 = 5925873635401407371LL;
long long int var_10 = 3160814122725619921LL;
int var_12 = 528284772;
int zero = 0;
unsigned short var_14 = (unsigned short)54344;
_Bool var_15 = (_Bool)1;
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
