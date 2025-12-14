#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9106407171679887135LL;
unsigned short var_6 = (unsigned short)24928;
long long int var_7 = 8174222551330835958LL;
int zero = 0;
unsigned short var_17 = (unsigned short)44440;
long long int var_18 = -4919871364790939948LL;
unsigned long long int var_19 = 11027989048984023906ULL;
long long int var_20 = -3336740535144248086LL;
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
