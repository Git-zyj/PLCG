#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)58;
unsigned long long int var_7 = 17132926968155441332ULL;
unsigned char var_9 = (unsigned char)104;
int var_10 = 1793143818;
unsigned long long int var_11 = 5520680371439635579ULL;
long long int var_13 = 2642679497855849695LL;
int zero = 0;
long long int var_15 = -189825502678142738LL;
unsigned short var_16 = (unsigned short)55613;
unsigned short var_17 = (unsigned short)13175;
void init() {
}

void checksum() {
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
