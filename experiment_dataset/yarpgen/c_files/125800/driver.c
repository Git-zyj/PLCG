#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7304000077168506095LL;
signed char var_1 = (signed char)-73;
unsigned int var_2 = 1227853792U;
unsigned short var_6 = (unsigned short)23613;
unsigned char var_10 = (unsigned char)66;
unsigned short var_13 = (unsigned short)16162;
int zero = 0;
int var_14 = 590704240;
unsigned long long int var_15 = 13111908434868804678ULL;
int var_16 = -344967772;
int var_17 = 465616519;
unsigned int var_18 = 661422887U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
