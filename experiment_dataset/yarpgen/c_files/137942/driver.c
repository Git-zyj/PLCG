#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1426110738;
long long int var_2 = 7736631669107420142LL;
unsigned short var_4 = (unsigned short)36497;
int var_8 = -636420098;
int var_13 = -1115804319;
int zero = 0;
unsigned short var_16 = (unsigned short)1261;
unsigned short var_17 = (unsigned short)35441;
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
