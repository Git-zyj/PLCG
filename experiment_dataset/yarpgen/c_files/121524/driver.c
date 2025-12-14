#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned char var_3 = (unsigned char)130;
unsigned char var_7 = (unsigned char)8;
int var_9 = -1946066475;
signed char var_10 = (signed char)83;
unsigned int var_11 = 3707736141U;
unsigned int var_12 = 699789442U;
int zero = 0;
unsigned short var_13 = (unsigned short)51270;
int var_14 = 1660075859;
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
