#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 746398584;
unsigned char var_2 = (unsigned char)69;
unsigned short var_4 = (unsigned short)19093;
int var_9 = -1869913978;
int zero = 0;
unsigned int var_17 = 376710486U;
_Bool var_18 = (_Bool)1;
int var_19 = 1484404885;
int var_20 = 924854843;
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
