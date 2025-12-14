#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned char var_3 = (unsigned char)153;
int var_4 = -1367595991;
unsigned long long int var_5 = 16821165965985989962ULL;
unsigned long long int var_11 = 9971596488490502834ULL;
int var_14 = -2058936663;
int zero = 0;
unsigned char var_19 = (unsigned char)108;
unsigned char var_20 = (unsigned char)221;
unsigned long long int var_21 = 7536764163384744808ULL;
short var_22 = (short)19900;
unsigned int var_23 = 683699931U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
