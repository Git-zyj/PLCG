#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1385;
int var_7 = -1308084475;
unsigned short var_11 = (unsigned short)64171;
int zero = 0;
unsigned short var_17 = (unsigned short)60934;
unsigned char var_18 = (unsigned char)70;
unsigned short var_19 = (unsigned short)2867;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
