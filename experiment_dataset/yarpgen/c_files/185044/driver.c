#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3850817615503233133LL;
unsigned short var_2 = (unsigned short)27972;
unsigned char var_3 = (unsigned char)210;
signed char var_5 = (signed char)108;
signed char var_7 = (signed char)80;
long long int var_14 = 8741338012972658225LL;
unsigned char var_15 = (unsigned char)236;
int zero = 0;
unsigned short var_16 = (unsigned short)36643;
unsigned char var_17 = (unsigned char)196;
unsigned int var_18 = 3797052975U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
