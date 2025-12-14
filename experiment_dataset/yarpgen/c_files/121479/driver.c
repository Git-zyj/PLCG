#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7317586153839642451LL;
unsigned long long int var_2 = 2652776053970888891ULL;
short var_6 = (short)30633;
short var_9 = (short)28255;
int var_10 = -717600562;
int zero = 0;
long long int var_14 = 6455938359759501159LL;
unsigned char var_15 = (unsigned char)161;
unsigned short var_16 = (unsigned short)41804;
long long int var_17 = -4545148924715042734LL;
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
