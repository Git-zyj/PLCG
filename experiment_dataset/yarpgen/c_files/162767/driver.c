#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)40988;
int var_5 = -919905889;
long long int var_7 = -407123822758580163LL;
unsigned char var_9 = (unsigned char)254;
unsigned char var_10 = (unsigned char)213;
int zero = 0;
long long int var_15 = -7801220339692447856LL;
unsigned int var_16 = 373450212U;
long long int var_17 = -1362957434954075434LL;
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
