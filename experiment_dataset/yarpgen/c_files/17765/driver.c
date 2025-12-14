#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7941320388265509980LL;
unsigned char var_2 = (unsigned char)98;
long long int var_7 = -7886615881977000934LL;
unsigned short var_10 = (unsigned short)60115;
short var_11 = (short)29952;
unsigned long long int var_12 = 9883398529294675477ULL;
int zero = 0;
int var_13 = -1096573443;
unsigned long long int var_14 = 5119360843584483390ULL;
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
