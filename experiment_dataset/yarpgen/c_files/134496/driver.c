#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -236605879385940998LL;
signed char var_6 = (signed char)-40;
long long int var_9 = -673367673782708864LL;
long long int var_13 = 519980168521381811LL;
unsigned short var_15 = (unsigned short)17768;
int zero = 0;
signed char var_16 = (signed char)-125;
short var_17 = (short)-14076;
void init() {
}

void checksum() {
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
