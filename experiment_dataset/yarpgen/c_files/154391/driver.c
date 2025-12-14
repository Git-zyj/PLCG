#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)27;
unsigned long long int var_2 = 11201974620996469597ULL;
unsigned int var_3 = 2681057621U;
int var_4 = 1302803180;
unsigned short var_10 = (unsigned short)40899;
long long int var_12 = -8265106646374500594LL;
int zero = 0;
unsigned char var_13 = (unsigned char)235;
signed char var_14 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
