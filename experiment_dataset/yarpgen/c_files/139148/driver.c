#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29715;
long long int var_1 = -1222294434499271287LL;
signed char var_4 = (signed char)-108;
unsigned char var_12 = (unsigned char)159;
int zero = 0;
unsigned char var_14 = (unsigned char)124;
long long int var_15 = -4890180322428340332LL;
signed char var_16 = (signed char)36;
unsigned char var_17 = (unsigned char)250;
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
