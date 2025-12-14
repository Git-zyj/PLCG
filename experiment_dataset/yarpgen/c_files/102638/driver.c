#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-100;
unsigned long long int var_11 = 3265205923005700265ULL;
unsigned char var_12 = (unsigned char)188;
signed char var_13 = (signed char)70;
int zero = 0;
unsigned char var_15 = (unsigned char)174;
unsigned short var_16 = (unsigned short)10409;
signed char var_17 = (signed char)16;
signed char var_18 = (signed char)-108;
int var_19 = 1825795612;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
